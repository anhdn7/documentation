#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers1 = { 1, 3, 5 };
    std::vector<int> numbers2 = { 2, 4, 6 };
    std::vector<int> merged(numbers1.size() + numbers2.size());
    std::merge(numbers1.begin(), numbers1.end(),
        numbers2.begin(), numbers2.end(),
        merged.begin());
    // merged = {1, 2, 3, 4, 5, 6}
    return 0;
}