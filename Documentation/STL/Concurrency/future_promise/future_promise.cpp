#include <iostream>
#include <thread>
#include <future>

int compute_result(int a, int b) {
    // Thực hiện tính toán phức tạp
    return a * b;
}

int main() {
    std::promise<int> promise_obj;
    std::future<int> future_obj = promise_obj.get_future();
    std::thread worker_thread([&promise_obj] {
        int result = compute_result(10, 20);
        promise_obj.set_value(result);
        });
    int final_result = future_obj.get();
    std::cout << "Final result: " << final_result << std::endl;
    worker_thread.join();
    return 0;
}