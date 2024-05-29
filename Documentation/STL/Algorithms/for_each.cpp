#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::for_each(numbers.begin(), numbers.end(), [](int x) {
        std::cout << x << " ";
        });
    // Output: 1 2 3 4 5
    return 0;
}