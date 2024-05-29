#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 2, 3, 3, 3, 4, 5 };
    std::vector<int> unique_numbers(numbers.size());
    auto new_end = std::unique_copy(numbers.begin(), numbers.end(), unique_numbers.begin());
    unique_numbers.erase(new_end, unique_numbers.end());
    // unique_numbers = {1, 2, 3, 4, 5}
    return 0;
}