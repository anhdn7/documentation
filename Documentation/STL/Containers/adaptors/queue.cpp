#include <iostream>
#include <queue>
#include <string>

int main() {
    // Tạo một queue để lưu trữ chuỗi
    std::queue<std::string> my_queue;

    // Thêm các phần tử vào queue
    my_queue.push("Xin chào");
    my_queue.push("Tôi");
    my_queue.push("là");
    my_queue.push("một");
    my_queue.push("queue");

    // In ra các phần tử trong queue
    while (!my_queue.empty()) {
        std::cout << my_queue.front() << " ";
        my_queue.pop();
    }
    std::cout << std::endl;

    return 0;
}
/*
Trong ví dụ này, chúng ta tạo một queue để lưu trữ các chuỗi std::string. Chúng ta sử dụng các phương thức push để thêm các phần tử vào queue và front để truy cập phần tử đầu tiên trong queue. Sau đó, chúng ta sử dụng pop để lấy phần tử đầu tiên khỏi queue và in ra các phần tử.

Kết quả của chương trình sẽ là:

Copy
Xin chào Tôi là một queue
Như bạn có thể thấy, các phần tử được in ra theo thứ tự được thêm vào queue.

Một số phương thức khác của queue là:
empty(): Kiểm tra xem queue có rỗng hay không.
size(): Trả về số lượng phần tử trong queue.
back(): Trả về phần tử cuối cùng trong queue.

Ví dụ, chúng ta có thể sử dụng size() để kiểm tra số lượng phần tử trong queue:
std::cout << "Số lượng phần tử trong queue: " << my_queue.size() << std::endl;

Hoặc sử dụng back() để truy cập phần tử cuối cùng trong queue:
std::cout << "Phần tử cuối cùng trong queue: " << my_queue.back() << std::endl;
*/