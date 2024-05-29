#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex mtx;

void recursive_function(int depth) {
    if (depth > 0) {
        mtx.lock();
        std::cout << "Depth: " << depth << std::endl;
        recursive_function(depth - 1);
        mtx.unlock();
    }
}

int main() {
    recursive_function(5);
    return 0;
}