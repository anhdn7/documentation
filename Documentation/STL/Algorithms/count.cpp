#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 2, 4, 2 };
    int count = std::count(numbers.begin(), numbers.end(), 2);
    // count = 3
    return 0;
}