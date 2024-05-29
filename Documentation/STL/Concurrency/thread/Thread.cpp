#include <iostream>
#include <thread>

void worker_function() {
    // Thực hiện công việc của luồng
    std::cout << "Worker thread running." << std::endl;
}

int main() {
    std::thread worker_thread(worker_function);
    worker_thread.join(); // Đợi cho đến khi luồng worker kết thúc
    return 0;
}