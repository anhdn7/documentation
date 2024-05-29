#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;

void worker_function() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; }); // Chờ đợi cho đến khi ready = true
    std::cout << "Worker thread is running." << std::endl;
}

int main() {
    std::thread worker_thread(worker_function);
    // Một số công việc khác...
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one(); // Thông báo cho luồng worker rằng ready = true
    worker_thread.join();
    return 0;
}