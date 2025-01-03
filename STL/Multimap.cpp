// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

// multimap: Key-value pairs allowing duplicate keys.

int main() {
    // 1. Initialization of a Multimap
    multimap<int, string> mm; // Creates an empty multimap

    // 2. Adding Elements (Multimap allows duplicate keys)
    mm.insert({1, "One"});     // Inserts {1, "One"}. O(log n)
    mm.emplace(2, "Two");     // Inserts {2, "Two"}
    mm.insert({1, "Uno"});     // Inserts {1, "Uno"} (duplicate key)
    mm.insert({3, "Three"});   // Inserts {3, "Three"}
    cout << "Elements added to the multimap: {1, 'One'}, {2, 'Two'}, {1, 'Uno'}, {3, 'Three'}\n";

    // 3. Accessing Elements (Iterating)
    cout << "Multimap elements: ";
    for (const auto& entry : mm) { // Iterates in sorted order of keys
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    // 4. Finding Elements
    auto it = mm.find(1); // Finds the first occurrence of key 1. O(log n)
    if (it != mm.end()) {
        cout << "First occurrence of key 1: {" << it->first << ", " << it->second << "}\n";
    }

    // 5. Equal Range for Duplicate Keys
    cout << "All values for key 1: ";
    auto range = mm.equal_range(1); // Returns pair of iterators [lower_bound, upper_bound)
    for (auto i = range.first; i != range.second; ++i) {
        cout << "{" << i->first << ", " << i->second << "} ";
    }
    cout << endl;

    // 6. Removing Elements
    mm.erase(1); // Removes all elements with key 1. O(log n)
    cout << "After removing key 1, multimap elements: ";
    for (const auto& entry : mm) {
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    // 7. Size of the Multimap
    cout << "Size of the multimap: " << mm.size() << endl; // O(1)

    // 8. Checking if the Multimap is Empty
    if (mm.empty()) {
        cout << "The multimap is empty\n";
    } else {
        cout << "The multimap is not empty\n";
    }

    // 9. Clearing the Multimap
    mm.clear(); // Removes all elements. O(n)
    cout << "After clearing, is the multimap empty? " << (mm.empty() ? "Yes" : "No") << endl;

    // 10. Lower Bound and Upper Bound
    mm.insert({10, "Ten"});
    mm.insert({20, "Twenty"});
    mm.insert({20, "Venti"});
    mm.insert({30, "Thirty"});
    cout << "Multimap elements: ";
    for (const auto& entry : mm) {
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    // Lower Bound: Smallest key >= 20
    auto lb = mm.lower_bound(20);
    if (lb != mm.end()) {
        cout << "Lower bound of 20: {" << lb->first << ", " << lb->second << "}\n";
    }

    // Upper Bound: Smallest key > 20
    auto ub = mm.upper_bound(20);
    if (ub != mm.end()) {
        cout << "Upper bound of 20: {" << ub->first << ", " << ub->second << "}\n";
    }

    return 0;
}
