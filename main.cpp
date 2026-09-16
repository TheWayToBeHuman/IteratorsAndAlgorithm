#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    using std::cin;
    using std::cout;
    using std::vector;

    // Task 1: Modifiable and Read Only Iteration
    vector<int> v = {5, 10, 15};

    // Loop A: begin() and end() allow modification.
    for (auto it = v.begin(); it != v.end(); ++it) {
        *it = *it + 1;
    }

    // Loop B: cbegin() and cend() provide read only access.
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it << " ";
        // *it = *it + 1; // Uncomment to observe the error.
    }
    cout << "\n";
    cout << "Task 1 short answer: Loop A uses mutable iterators, while Loop B uses const iterators so *it is read-only.\n\n";

    // Task 2: Search with find()
    const vector<int> scores = {78, 92, 65, 88, 74, 92};
    int target;
    cout << "Enter a score to find: ";
    cin >> target;

    auto result = std::find(scores.cbegin(), scores.cend(), target);
    if (result != scores.cend()) {
        cout << "Found\n";
    } else {
        cout << "Not found\n";
    }
    cout << "Task 2 short answer: find() returns scores.cend() when the value is absent.\n\n";

    // Task 3: Sort in Ascending and Descending Order
    vector<int> values = {78, 92, 65, 88, 74, 92};

    std::sort(values.begin(), values.end());
    cout << "Ascending: ";
    for (auto value : values) {
        cout << value << " ";
    }
    cout << "\n";

    std::sort(values.begin(), values.end(), std::greater<int>());
    cout << "Descending: ";
    for (auto value : values) {
        cout << value << " ";
    }
    cout << "\n\n";

    // Task 4: count() counts how many times a value appears in a range.
    auto occurrences = std::count(values.cbegin(), values.cend(), 92);
    cout << "Task 4 (count): 92 appears " << occurrences << " times.\n";
    cout << "Task 4 explanation: count() returns a count and does not modify the vector.\n";

    return 0;
}
