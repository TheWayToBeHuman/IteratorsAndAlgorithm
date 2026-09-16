#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers{8, 3, 10, 5, 3, 12, 7};

    // Task 1: Read-only traversal (const auto&).
    std::cout << "Task 1 - Read-only traversal: ";
    for (const auto& value : numbers) {
        std::cout << value << ' ';
    }
    std::cout << "\n";

    // Task 2: Searching (std::find).
    const int target = 10;
    const auto found = std::find(numbers.begin(), numbers.end(), target);
    std::cout << "Task 2 - Search for " << target << ": "
              << (found != numbers.end() ? "Found" : "Not found") << "\n";

    // Task 3: Sorting (std::sort).
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Task 3 - Sorted values: ";
    for (const auto& value : numbers) {
        std::cout << value << ' ';
    }
    std::cout << "\n";

    // Task 4: Additional STL algorithm (std::count_if).
    const auto evenCount =
        std::count_if(numbers.begin(), numbers.end(),
                      [](const int value) { return value % 2 == 0; });
    std::cout << "Task 4 - Count of even numbers: " << evenCount << "\n";

    return 0;
}
