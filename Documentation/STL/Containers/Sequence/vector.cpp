#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = { 1, 2, 3, 4, 5 };

    // Thêm phần tử vào cuối vector
    v.push_back(6);

    // Truy cập phần tử
    std::cout << "Phần tử thứ 3: " << v[2] << std::endl;

    // Lặp qua các phần tử
    for (auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}