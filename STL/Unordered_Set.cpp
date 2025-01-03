// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Initialization of an Unordered Set
    unordered_set<int> us; // Creates an empty unordered set

    // 2. Adding Elements
    us.insert(10); // O(1) average
    us.insert(20); // O(1) average
    us.insert(30); // O(1) average
    us.insert(10); // Duplicate elements are ignored
    cout << "Elements added to the unordered set: 10, 20, 30, 10\n";

    // 3. Accessing Elements (Iterating)
    cout << "Unordered set elements: ";
    for (int x : us) { // The order is undefined
        cout << x << " ";
    }
    cout << endl;

    // 4. Checking Existence of an Element
    if (us.find(20) != us.end()) { // O(1) average
        cout << "20 is present in the unordered set\n";
    } else {
        cout << "20 is not present in the unordered set\n";
    }

    // 5. Removing Elements
    us.erase(20); // Removes the element with value 20. O(1) average
    cout << "After removing 20, unordered set elements: ";
    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;

    // 6. Checking the Size of the Unordered Set
    cout << "Size of the unordered set: " << us.size() << endl; // O(1)

    // 7. Checking if the Unordered Set is Empty
    if (us.empty()) {
        cout << "The unordered set is empty\n";
    } else {
        cout << "The unordered set is not empty\n";
    }

    // 8. Clearing the Unordered Set
    us.clear(); // Removes all elements. O(n)
    cout << "After clearing, is the unordered set empty? " << (us.empty() ? "Yes" : "No") << endl;

    // 9. Using Custom Hash Function
    struct CustomHash {
        size_t operator()(int x) const {
            return x % 10; // Simple hash function: mod 10
        }
    };

    unordered_set<int, CustomHash> customUs;
    customUs.insert(15);
    customUs.insert(25);
    customUs.insert(35);
    cout << "Elements in custom hashed unordered set: ";
    for (int x : customUs) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
