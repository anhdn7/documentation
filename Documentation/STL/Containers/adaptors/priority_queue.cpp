#include <iostream>
#include <queue>
#include <vector>

// Định nghĩa một cấu trúc Task với ba thành phần: độ ưu tiên, thời gian và mô tả
struct Task {
    int priority;
    int time;
    std::string description;

    // Toán tử so sánh để sắp xếp các task theo độ ưu tiên giảm dần
    bool operator<(const Task& other) const {
        return priority < other.priority;
    }
};

int main() {
    // Tạo một priority_queue để lưu trữ các task
    std::priority_queue<Task> task_queue;

    // Thêm các task vào priority_queue
    task_queue.push({ 5, 2, "Hoàn thành báo cáo" });
    task_queue.push({ 3, 4, "Đi họp" });
    task_queue.push({ 7, 1, "Phát triển tính năng mới" });
    task_queue.push({ 2, 3, "Trả lời email" });

    // Xử lý các task theo thứ tự ưu tiên
    while (!task_queue.empty()) {
        Task current_task = task_queue.top();
        task_queue.pop();

        std::cout << "Ưu tiên: " << current_task.priority
            << ", Thời gian: " << current_task.time
            << ", Mô tả: " << current_task.description << std::endl;
    }

    return 0;
}

/*
* Trong ví dụ này, chúng ta định nghĩa một cấu trúc Task với ba thành phần: độ ưu tiên, thời gian và mô tả. Chúng ta sử dụng toán tử < để so sánh các Task và sắp xếp chúng theo độ ưu tiên giảm dần.

Sau đó, chúng ta tạo một priority_queue để lưu trữ các Task. Chúng ta thêm các Task vào hàng đợi ưu tiên bằng cách sử dụng hàm push.

Cuối cùng, chúng ta xử lý các Task theo thứ tự ưu tiên bằng cách lặp lại priority_queue và in ra các thông tin của từng Task.

Output
Ưu tiên: 7, Thời gian: 1, Mô tả: Phát triển tính năng mới
Ưu tiên: 5, Thời gian: 2, Mô tả: Hoàn thành báo cáo
Ưu tiên: 3, Thời gian: 4, Mô tả: Đi họp
Ưu tiên: 2, Thời gian: 3, Mô tả: Trả lời email
*/