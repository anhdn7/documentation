#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 5, 2, 8, 1, 9 };
    std::sort(numbers.begin(), numbers.end());
    // numbers = {1, 2, 5, 8, 9}
    return 0;
}