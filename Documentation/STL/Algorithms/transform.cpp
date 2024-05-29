#include <algorithm>
#include <vector>
#include <functional>

int main() {
    std::vector<int> numbers = { 5, 2, 8, 1, 9 };
    std::vector<int> squared_numbers(numbers.size());
    std::transform(numbers.begin(), numbers.end(), squared_numbers.begin(),
        [](int x) { return x * x; });
    // squared_numbers = {25, 4, 64, 1, 81}
    return 0;
}