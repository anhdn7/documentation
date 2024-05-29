#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> counter(0);

void increment_counter() {
    for (int i = 0; i < 1000000; i++) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
}

int main() {
    std::thread thread1(increment_counter);
    std::thread thread2(increment_counter);
    thread1.join();
    thread2.join();
    std::cout << "Final value of counter: " << counter << std::endl;
    return 0;
}