#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 5, 2, 8, 1, 9, 2, 8 };
    auto new_end = std::unique(numbers.begin(), numbers.end());
    numbers.erase(new_end, numbers.end());
    // numbers = {5, 2, 8, 1, 9}
    return 0;
}