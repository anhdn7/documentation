#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 5, 2, 8, 1, 9 };
    auto it = std::find(numbers.begin(), numbers.end(), 8);
    if (it != numbers.end()) {
        // Element 8 was found
    }
    else {
        // Element 8 was not found
    }
    return 0;
}