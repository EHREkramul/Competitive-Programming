// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Initialization of a deque
    deque<int> dq1 = {1, 2, 3, 4, 5}; // Time Complexity: O(n)
    deque<int> dq2(5, 10);            // Initializes dq2 with size 5 and all values as 10. O(n)

    // 2. Accessing Elements
    cout << "First element: " << dq1.front() << endl; // O(1)
    cout << "Last element: " << dq1.back() << endl;  // O(1)
    cout << "Element at(1): " << dq1.at(1) << endl; // O(1)
    cout << "Element at index 2: " << dq1[2] << endl; // O(1)

    // 3. Adding Elements
    dq1.push_back(6); // Adds an element to the end. O(1)
    dq1.push_front(0); // Adds an element to the front. O(1)
    cout << "After push_back and push_front: ";
    for (int x : dq1) cout << x << " ";
    cout << endl;

    // 4. Removing Elements
    dq1.pop_back(); // Removes the last element. O(1)
    dq1.pop_front(); // Removes the first element. O(1)
    cout << "After pop_back and pop_front: ";
    for (int x : dq1) cout << x << " ";
    cout << endl;

    // 5. Iterating through a deque
    cout << "Elements in dq1: ";
    for (int x : dq1) cout << x << " "; // O(n)
    cout << endl;

    // 6. Sorting (Requires converting to vector)
    vector<int> vec(dq1.begin(), dq1.end()); // Copy deque to vector
    sort(vec.begin(), vec.end());           // Sorts in ascending order. O(n log n)
    cout << "After sorting: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    // 7. Reversing
    reverse(dq1.begin(), dq1.end()); // Reverses the deque. O(n)
    cout << "After reverse: ";
    for (int x : dq1) cout << x << " ";
    cout << endl;

    // 8. Finding Maximum and Minimum Elements
    int maxElem = *max_element(dq1.begin(), dq1.end()); // O(n)
    int minElem = *min_element(dq1.begin(), dq1.end()); // O(n)
    cout << "Maximum element: " << maxElem << ", Minimum element: " << minElem << endl;

    // 9. Erasing Elements
    dq1.erase(dq1.begin() + 2); // Removes the element at index 2. O(n)
    cout << "After erase: ";
    for (int x : dq1) cout << x << " ";
    cout << endl;

    // 10. Clearing the Deque
    dq1.clear(); // Removes all elements. O(n)
    cout << "After clear, size of dq1: " << dq1.size() << endl;

    // 11. Resizing the Deque
    dq2.resize(3); // Resizes to 3 elements. O(n)
    cout << "After resize, dq2: ";
    for (int x : dq2) cout << x << " ";
    cout << endl;

    // 12. Checking Size and Capacity
    cout << "Size of dq2: " << dq2.size() << endl;      // O(1)
    cout << "Deque does not have a capacity function.\n";

    // 13. Using a Deque of Pairs
    deque<pair<int, int>> dqPairs = {{1, 2}, {3, 4}, {5, 6}}; // O(n)
    cout << "Deque of pairs: ";
    for (auto p : dqPairs) cout << "(" << p.first << ", " << p.second << ") ";
    cout << endl;

    // 14. Checking if a Deque is Empty
    if (dq1.empty()) cout << "dq1 is empty\n"; // O(1)

    return 0;
}
