// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

// forward_list: Singly-linked list; less memory overhead but no backward traversal.

int main() {
    // 1. Initialization of a Forward List
    forward_list<int> fl; // Creates an empty forward list

    // 2. Adding Elements
    fl.push_front(10); // Inserts 10 at the front. O(1)
    fl.push_front(20); // Inserts 20 at the front. O(1)
    fl.push_front(30); // Inserts 30 at the front. O(1)
    cout << "Elements after push_front: ";
    for (int x : fl) {
        cout << x << " ";
    }
    cout << endl;

    // 3. Inserting Elements
    auto it = fl.before_begin(); // Iterator before the first element
    fl.insert_after(it, 40);     // Inserts 40 after the iterator. O(1)
    cout << "Elements after insert_after: ";
    for (int x : fl) {
        cout << x << " ";
    }
    cout << endl;

    // 4. Removing Elements
    fl.pop_front(); // Removes the first element. O(1)
    cout << "Elements after pop_front: ";
    for (int x : fl) {
        cout << x << " ";
    }
    cout << endl;

    fl.remove(40); // Removes all elements with value 40. O(n)
    cout << "Elements after remove(40): ";
    for (int x : fl) {
        cout << x << " ";
    }
    cout << endl;

    // 5. Accessing Elements
    cout << "First element: " << fl.front() << endl; // O(1)

    // 6. Iterating Over the Forward List
    cout << "Iterating over the forward list: ";
    for (int x : fl) {
        cout << x << " ";
    }
    cout << endl;

    // 7. Checking the Size (Manual Count)
    int size = 0;
    for (int x : fl) {
        ++size;
    }
    cout << "Size of the forward list: " << size << endl; // O(n)

    // 8. Clearing the Forward List
    fl.clear(); // Removes all elements. O(n)
    cout << "After clearing, is the forward list empty? " << (fl.empty() ? "Yes" : "No") << endl;

    // 9. Merging Two Forward Lists
    forward_list<int> fl1 = {10, 20, 30};
    forward_list<int> fl2 = {15, 25, 35};
    fl1.merge(fl2); // Merges fl2 into fl1. O(n + m)
    cout << "Elements after merging: ";
    for (int x : fl1) {
        cout << x << " ";
    }
    cout << endl;

    // 10. Sorting the Forward List
    fl1.sort(); // Sorts the forward list. O(n log n)
    cout << "Elements after sorting: ";
    for (int x : fl1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
