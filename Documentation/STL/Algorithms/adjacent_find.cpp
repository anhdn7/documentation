#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 2, 4, 5 };
    auto it = std::adjacent_find(numbers.begin(), numbers.end());
    if (it != numbers.end()) {
        // Adjacent elements found
    }
    else {
        // No adjacent elements found
    }
    return 0;
}