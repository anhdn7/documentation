#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int shared_variable = 0;

void increment_shared_variable() {
    for (int i = 0; i < 1000000; i++) {
        mtx.lock();
        shared_variable++;
        mtx.unlock();
    }
}

int main() {
    std::thread thread1(increment_shared_variable);
    std::thread thread2(increment_shared_variable);
    thread1.join();
    thread2.join();
    std::cout << "Final value of shared_variable: " << shared_variable << std::endl;
    return 0;
}