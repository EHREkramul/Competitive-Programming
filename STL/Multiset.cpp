// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Initialization of a Multiset
    multiset<int> ms; // Creates an empty multiset. Ascending order
    // multiset<int, greater<int>> ms; // For descending order mulitset

    // 2. Adding Elements
    ms.insert(10); // O(log n)
    ms.emplace(20); // O(log n)
    ms.emplace(20); // O(log n)
    ms.insert(10); // O(log n)
    ms.insert(15); // O(log n)
    cout << "Elements added to the multiset: 10, 20, 10, 15\n";

    // 3. Accessing Elements (Iterating)
    cout << "Multiset elements: ";
    for (int x : ms) { // Iterates in ascending order
        cout << x << " ";
    }
    cout << endl;

    // 4. Counting Occurrences of an Element
    cout << "Count of 10: " << ms.count(10) << endl; // O(log n)

    // 5. Removing Elements
    ms.erase(ms.find(10)); // Removes one occurrence of 10. O(log n)
    cout << "After removing one occurrence of 10: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;

    // 6. Removing All Occurrences of an Element
    ms.erase(20); // Removes all occurrences of 20. O(log n)
    cout << "After removing all occurrences of 20: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;

    // 7. Finding an Element
    auto it = ms.find(15); // O(log n)
    if (it != ms.end()) {
        cout << "Element "<< *it << " found at Index: " << distance(ms.begin(), it) << endl; // here in distance() O(k). k=item between begin() and it
    } else {
        cout << "Element not found\n";
    }

    // 8. Lower Bound and Upper Bound
    ms.insert(30);
    ms.insert(25);
    cout << "Multiset elements: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;

    auto lb = ms.lower_bound(15); // Smallest element >= 15
    if (lb != ms.end()) {
        cout << "Lower bound of 15: " << *lb << endl;
    }

    auto ub = ms.upper_bound(15); // Smallest element > 15
    if (ub != ms.end()) {
        cout << "Upper bound of 15: " << *ub << endl;
    }

    // 9. Size of the Multiset
    cout << "Size of the multiset: " << ms.size() << endl; // O(1)

    // 10. Checking if the Multiset is Empty
    if (ms.empty()) {
        cout << "The multiset is empty\n";
    } else {
        cout << "The multiset is not empty\n";
    }

    // 11. Clearing the Multiset
    ms.clear(); // Removes all elements. O(n)
    cout << "After clearing, is the multiset empty? " << (ms.empty() ? "Yes" : "No") << endl;

    return 0;
}
