#include <iostream>
#include <list>

int main() {
    std::list<int> lst = { 10, 20, 30, 40, 50 };

    // Thêm phần tử vào đầu danh sách
    lst.push_front(5);

    // Xóa phần tử khỏi danh sách
    lst.remove(20);

    // Lặp qua các phần tử
    for (auto x : lst) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}