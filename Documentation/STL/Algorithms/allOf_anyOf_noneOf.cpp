#include <algorithm>
#include <vector>
#include <functional>

int main() {
    std::vector<int> numbers = { 2, 4, 6, 8, 10 };

    // Check if all elements are even
    bool all_even = std::all_of(numbers.begin(), numbers.end(), [](int x) { return x % 2 == 0; });

    // Check if any element is negative
    bool any_negative = std::any_of(numbers.begin(), numbers.end(), [](int x) { return x < 0; });

    // Check if no element is negative
    bool none_negative = std::none_of(numbers.begin(), numbers.end(), [](int x) { return x < 0; });

    return 0;
}