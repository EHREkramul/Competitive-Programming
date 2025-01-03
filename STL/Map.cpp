// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

// map: Key-value pairs with unique keys.

int main() {
    // 1. Initialization of a Map
    map<int, string> m; // Creates an empty map
    // map<int, string, greater<int>> m; // For descending order according to key

    // 2. Adding Elements
    m[1] = "One";     // Inserts {1, "One"} or updates value if the key exists. O(log n)
    m[2] = "Two";     // Inserts {2, "Two"}
    m.emplace(4, "Four"); // Alternative way to insert. O(log n)
    m.insert({3, "Three"}); // Alternative way to insert. O(log n)
    cout << "Elements added to the map: {1, 'One'}, {2, 'Two'}, {4, 'Four'}, {3, 'Three'}\n";

    // 3. Accessing Elements
    cout << "Value associated with key 2: " << m[2] << endl; // O(log n)

    // 4. Iterating Over the Map
    cout << "Map elements: ";
    for (auto entry : m) { // Iterates in sorted order of keys
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    // 5. Checking Existence of a Key
    if ( m.find(2)!= m.end()) { // O(log n)
        cout << "Key 2 exists in the map."<<endl;
    } else {
        cout << "Key 2 does not exist in the map\n";
    }

    // 6. Removing Elements
    m.erase(2); // Removes the element with key 2. O(log n)
    cout << "After removing key 2, map elements: ";
    for (auto entry : m) {
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    // 7. Size of the Map
    cout << "Size of the map: " << m.size() << endl; // O(1)

    // 8. Checking if the Map is Empty
    if (m.empty()) {
        cout << "The map is empty\n";
    } else {
        cout << "The map is not empty\n";
    }

    // 9. Clearing the Map
    m.clear(); // Removes all elements. O(n)
    cout << "After clearing, is the map empty? " << (m.empty() ? "Yes" : "No") << endl;

    // 10. Using Lower Bound and Upper Bound
    m[10] = "Ten";
    m[20] = "Twenty";
    m[30] = "Thirty";
    cout << "Map elements: ";
    for (const auto &entry : m) {
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    // Lower Bound: Smallest key >= 20
    auto lb = m.lower_bound(20);
    if (lb != m.end()) {
        cout << "Lower bound of 20: {" << lb->first << ", " << lb->second << "}\n";
    }

    // Upper Bound: Smallest key > 20
    auto ub = m.upper_bound(20);
    if (ub != m.end()) {
        cout << "Upper bound of 20: {" << ub->first << ", " << ub->second << "}\n";
    }


    return 0;
}
