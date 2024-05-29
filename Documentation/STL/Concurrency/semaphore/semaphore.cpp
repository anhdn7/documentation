#include <iostream>
#include <thread>
#include <semaphore>

std::counting_semaphore<3> semaphore(3); // Khởi tạo với 3 token

void worker_function() {
    semaphore.acquire(); // Lấy 1 token
    std::cout << "Worker thread running..." << std::endl;
    // Thực hiện công việc
    semaphore.release(); // Trả lại 1 token
}

int main() {
    std::thread thread1(worker_function);
    std::thread thread2(worker_function);
    std::thread thread3(worker_function);
    std::thread thread4(worker_function);
    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();
    return 0;
}