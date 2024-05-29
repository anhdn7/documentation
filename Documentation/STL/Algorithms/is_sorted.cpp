#include <algorithm>
#include <vector>

int main() {
    std::vector<int> sorted_numbers = { 1, 2, 3, 4, 5 };
    std::vector<int> unsorted_numbers = { 5, 2, 1, 4, 3 };

    bool is_sorted1 = std::is_sorted(sorted_numbers.begin(), sorted_numbers.end());   // true
    bool is_sorted2 = std::is_sorted(unsorted_numbers.begin(), unsorted_numbers.end());  // false

    return 0;
}