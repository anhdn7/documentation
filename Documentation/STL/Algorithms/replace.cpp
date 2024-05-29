#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::replace(numbers.begin(), numbers.end(), 3, 10);
    // numbers = {1, 2, 10, 4, 5}
    return 0;
}