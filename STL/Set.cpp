// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

// set: Stores unique, ordered elements.

int main() {
    // 1. Initialization of a Set
    set<int> s; // Creates an empty set

    // 2. Adding Elements
    s.insert(10); // O(log n)
    s.emplace(20); // O(log n)
    s.insert(15); // O(log n)
    s.insert(10); // Duplicate elements are ignored
    cout << "Elements added to the set: 10, 20, 15, 10\n";

    // 3. Accessing Elements (Iterating)
    cout << "Set elements: ";
    for (int x : s) { // Iterates in ascending order
        cout << x << " ";
    }
    cout << endl;

    // 4. Checking Existence of an Element
    if (s.count(15)) { // O(log n)
        cout << "15 is present in the set\n";
    } else {
        cout << "15 is not present in the set\n";
    }

    // 5. Removing Elements
    s.erase(15); // Removes the element 15. O(log n)
    cout << "After erasing 15, set elements: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // 6. Finding an Element
    auto it = s.find(20); // O(log n)
    if (it != s.end()) {
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found\n";
    }

    // 7. Size of the Set
    cout << "Size of the set: " << s.size() << endl; // O(1)

    // 8. Checking if the Set is Empty
    if (s.empty()) {
        cout << "The set is empty\n";
    } else {
        cout << "The set is not empty\n";
    }

    // 9. Clearing the Set
    s.clear(); // Removes all elements. O(n)
    cout << "After clearing, is the set empty? " << (s.empty() ? "Yes" : "No") << endl;

    // 10. Using a Set with Custom Comparator (Descending Order)
    set<int, greater<int>> descSet; // Descending order
    descSet.insert(10);
    descSet.insert(20);
    descSet.insert(15);
    descSet.insert(15);
    cout << "Elements in descending order: ";
    for (int x : descSet) {
        cout << x << " ";
    }
    cout << endl;

    s= {5,7,4,9,6,0};
    cout<<endl<< "S is : ";
    for(auto i: s)cout<<i<<" ";
    cout<<endl;
    

    auto lowerBound = s.lower_bound(5); // O(log n)
    cout<< "Lower Bound Element: " << *lowerBound << ", Index: "<< distance(s.begin(), lowerBound) <<endl;

    auto upperBound = s.upper_bound(5); // O(log n)
    cout<< "Upper Bound Element: " << *upperBound << ", Index: "<< distance(s.begin(), upperBound) <<endl;

    return 0;
}
