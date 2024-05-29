#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::vector<int> pattern = { 3, 4 };
    auto it = std::search(numbers.begin(), numbers.end(),
        pattern.begin(), pattern.end());
    if (it != numbers.end()) {
        // Pattern found
    }
    else {
        // Pattern not found
    }
    return 0;
}