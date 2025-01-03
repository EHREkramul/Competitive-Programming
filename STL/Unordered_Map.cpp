// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

// unordered_map: Key-value pairs with no order.

int main() {
    // 1. Initialization of an Unordered Map
    unordered_map<int, string> um; // Creates an empty unordered map

    // 2. Adding Elements
    um[1] = "One";               // Inserts {1, "One"} or updates value if key exists. O(1) average
    um[2] = "Two";               // Inserts {2, "Two"}
    um.insert({3, "Three"});     // Alternative way to insert. O(1) average
    cout << "Elements added to the unordered map: {1, 'One'}, {2, 'Two'}, {3, 'Three'}\n";

    // 3. Accessing Elements
    cout << "Value associated with key 2: " << um[2] << endl; // O(1) average

    // 4. Iterating Over the Map
    cout << "Unordered map elements: ";
    for (const auto& entry : um) { // Iterates in an undefined order
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    // 5. Checking Existence of a Key
    if (um.find(2) != um.end()) { // O(1) average
        cout << "Key 2 exists in the unordered map\n";
    } else {
        cout << "Key 2 does not exist in the unordered map\n";
    }

    // 6. Removing Elements
    um.erase(2); // Removes the element with key 2. O(1) average
    cout << "After removing key 2, unordered map elements: ";
    for (const auto& entry : um) {
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    // 7. Size of the Unordered Map
    cout << "Size of the unordered map: " << um.size() << endl; // O(1)

    // 8. Checking if the Unordered Map is Empty
    if (um.empty()) {
        cout << "The unordered map is empty\n";
    } else {
        cout << "The unordered map is not empty\n";
    }

    // 9. Clearing the Unordered Map
    um.clear(); // Removes all elements. O(n)
    cout << "After clearing, is the unordered map empty? " << (um.empty() ? "Yes" : "No") << endl;

    // 10. Using Custom Hash Function
    struct CustomHash {
        size_t operator()(int x) const {
            return x % 10; // Simple hash function: mod 10
        }
    };

    unordered_map<int, string, CustomHash> customUm;
    customUm[15] = "Fifteen";
    customUm[25] = "Twenty-five";
    customUm[35] = "Thirty-five";
    cout << "Elements in custom hashed unordered map: ";
    for (const auto& entry : customUm) {
        cout << "{" << entry.first << ", " << entry.second << "} ";
    }
    cout << endl;

    return 0;
}
