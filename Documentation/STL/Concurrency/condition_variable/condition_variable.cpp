#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>

std::condition_variable cv;
std::mutex mtx;
bool data_ready = false;

void producer() {
    // Tạo dữ liệu
    std::cout << "Producer: Data is ready." << std::endl;
    std::unique_lock<std::mutex> lock(mtx);
    data_ready = true;
    cv.notify_one();
}

void consumer() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return data_ready; });
    // Sử dụng dữ liệu
    std::cout << "Consumer: Data is consumed." << std::endl;
}

int main() {
    std::thread producer_thread(producer);
    std::thread consumer_thread(consumer);
    producer_thread.join();
    consumer_thread.join();
    return 0;
}