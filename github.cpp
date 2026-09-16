#include <iostream>

using namespace std;

int main()
{
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
}
