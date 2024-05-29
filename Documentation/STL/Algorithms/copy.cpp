#include <algorithm>
#include <vector>

int main() {
    std::vector<int> source = { 1, 2, 3, 4, 5 };
    std::vector<int> destination(source.size());
    std::copy(source.begin(), source.end(), destination.begin());
    // destination = {1, 2, 3, 4, 5}
    return 0;
}