#include <iostream>
#include <thread>
#include <barrier>

std::barrier<std::allocator<int>> barrier(3);

void worker_function() {
    std::cout << "Worker thread running..." << std::endl;
    barrier.arrive_and_wait();
    std::cout << "All threads have reached the barrier." << std::endl;
}

int main() {
    std::thread thread1(worker_function);
    std::thread thread2(worker_function);
    std::thread thread3(worker_function);
    thread1.join();
    thread2.join();
    thread3.join();
    return 0;
}