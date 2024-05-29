#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::reverse(numbers.begin(), numbers.end());
    // numbers = {5, 4, 3, 2, 1}
    return 0;
}