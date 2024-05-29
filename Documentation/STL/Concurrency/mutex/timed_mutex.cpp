#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::timed_mutex mtx;

void lock_for_some_time() {
    if (mtx.try_lock_for(std::chrono::seconds(2))) {
        std::cout << "Locked the mutex for 2 seconds." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
        mtx.unlock();
    }
    else {
        std::cout << "Failed to lock the mutex within 2 seconds." << std::endl;
    }
}

int main() {
    std::thread t1(lock_for_some_time);
    std::thread t2(lock_for_some_time);

    t1.join();
    t2.join();

    return 0;
}