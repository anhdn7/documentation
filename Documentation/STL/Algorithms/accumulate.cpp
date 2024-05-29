#include <numeric>
#include <vector>

int main() {
    std::vector<int> numbers = { 5, 2, 8, 1, 9 };
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    // sum = 25
    return 0;
}