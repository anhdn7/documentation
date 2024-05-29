#include <iostream>
#include <stack>
#include <string>

int main() {
    // Tạo một stack để lưu trữ chuỗi
    std::stack<std::string> my_stack;

    // Thêm các phần tử vào stack
    my_stack.push("Xin chào");
    my_stack.push("Tôi");
    my_stack.push("là");
    my_stack.push("một");
    my_stack.push("stack");

    // In ra các phần tử trong stack
    while (!my_stack.empty()) {
        std::cout << my_stack.top() << " ";
        my_stack.pop();
    }
    std::cout << std::endl;

    return 0;
}
/*
Trong ví dụ này, chúng ta tạo một stack để lưu trữ các chuỗi std::string. Chúng ta sử dụng các phương thức push để thêm các phần tử vào stack và top để truy cập phần tử đầu tiên (phần tử trên đỉnh) của stack. Sau đó, chúng ta sử dụng pop để lấy phần tử đầu tiên khỏi stack và in ra các phần tử.

Kết quả của chương trình sẽ là:

Copy
stack một là Tôi Xin chào
Như bạn có thể thấy, các phần tử được in ra theo thứ tự ngược lại so với thứ tự được thêm vào stack, đây là đặc trưng của cấu trúc dữ liệu stack (Last In First Out - LIFO).

Một số phương thức khác của stack là:

empty(): Kiểm tra xem stack có rỗng hay không.
size(): Trả về số lượng phần tử trong stack.
Ví dụ, chúng ta có thể sử dụng size() để kiểm tra số lượng phần tử trong stack:

cpp
Copy
std::cout << "Số lượng phần tử trong stack: " << my_stack.size() << std::endl;
*/