#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> grades;

    // Thêm các cặp key-value vào map
    grades["Alice"] = 90;
    grades["Bob"] = 85;
    grades["Charlie"] = 92;

    // Truy cập giá trị theo key
    std::cout << "Alice's grade: " << grades["Alice"] << std::endl;

    // Lặp qua các cặp key-value
    for (const auto& pair : grades) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}