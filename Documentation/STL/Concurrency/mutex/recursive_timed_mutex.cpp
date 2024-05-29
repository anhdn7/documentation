#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::recursive_timed_mutex mtx;

void recursive_timed_function(int depth) {
    if (depth > 0) {
        if (mtx.try_lock_for(std::chrono::seconds(1))) {
            std::cout << "Depth: " << depth << std::endl;
            recursive_timed_function(depth - 1);
            mtx.unlock();
        } else {
            std::cout << "Failed to lock the mutex within 1 second at depth " << depth << "." << std::endl;
        }
    }
}

int main() {
    recursive_timed_function(5);
    return 0;
}