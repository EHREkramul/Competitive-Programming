#include <iostream>
#include <list>
#include <algorithm> // For sort, reverse

using namespace std;

int main() {
    // 1. Initialization of a list
    list<int> lst1 = {1, 2, 3, 4, 5}; // Time Complexity: O(n)
    list<int> lst2(5, 10);            // Initializes lst2 with size 5 and all values as 10. O(n)

    // 2. Accessing Elements
    cout << "First element: " << lst1.front() << endl; // O(1)
    cout << "Last element: " << lst1.back() << endl;  // O(1)

    // 3. Adding Elements
    lst1.push_back(6); // Adds an element to the end. O(1)
    lst1.push_front(0); // Adds an element to the front. O(1)
    cout << "After push_back and push_front: ";
    for (int &x : lst1) cout << x << " ";
    cout << endl;

    // 4. Removing Elements
    lst1.pop_back(); // Removes the last element. O(1)
    lst1.pop_front(); // Removes the first element. O(1)
    cout << "After pop_back and pop_front: ";
    for (int x : lst1) cout << x << " ";
    cout << endl;

    // 5. Iterating through a list
    cout << "Elements in lst1: ";
    for (int x : lst1) cout << x << " "; // O(n)
    cout << endl;

    // 6. Sorting
    lst1.push_back(3); // Adding an unsorted element for demonstration
    lst1.sort();       // Sorts the list in ascending order. O(n log n)
    cout << "After sort: ";
    for (int x : lst1) cout << x << " ";
    cout << endl;

    // 7. Reversing
    lst1.reverse(); // Reverses the list. O(n)
    cout << "After reverse: ";
    for (int x : lst1) cout << x << " ";
    cout << endl;

    // 8. Unique Elements
    lst1.sort();   // Must sort before calling unique
    lst1.unique(); // Removes consecutive duplicates. O(n)
    cout << "After unique: ";
    for (int x : lst1) cout << x << " ";
    cout << endl;

    // 9. Removing Specific Elements
    lst1.remove(3); // Removes all elements with the value 3. O(n)
    cout << "After remove(3): ";
    for (int x : lst1) cout << x << " ";
    cout << endl;

    // 10. Erasing Elements
    auto it = lst1.begin();
    advance(it, 2); // Move iterator to the 3rd element (0-based index)
    lst1.erase(it); // Removes the element at the 3rd position. O(1)
    cout << "After erase: ";
    for (int x : lst1) cout << x << " ";
    cout << endl;

    // 11. Clearing the List
    lst1.clear(); // Removes all elements. O(n)
    cout << "After clear, size of lst1: " << lst1.size() << endl;

    // 12. Resizing the List
    lst2.resize(3); // Resizes to 3 elements. O(n)
    cout << "After resize, lst2: ";
    for (int x : lst2) cout << x << " ";
    cout << endl;

    // 13. Checking Size and Empty
    cout << "Size of lst2: " << lst2.size() << endl; // O(1)
    if (lst1.empty()) cout << "lst1 is empty\n";     // O(1)

    // 14. Splicing (Moving Elements Between Lists)
    list<int> lst3 = {100, 200, 300};
    lst2.splice(lst2.begin(), lst3); // Moves all elements from lst3 to lst2 at the beginning. O(1)
    cout << "After splice, lst2: ";
    for (int x : lst2) cout << x << " ";
    cout << endl;

    // 15. Merging Lists
    list<int> lst4 = {3, 5, 7};
    list<int> lst5 = {1, 2, 6};
    lst4.merge(lst5); // Merges two sorted lists into one. O(n)
    cout << "After merge, lst4: ";
    for (int x : lst4) cout << x << " ";
    cout << endl;

    // 16. Using a List of Pairs
    list<pair<int, int>> lstPairs = {{1, 2}, {3, 4}, {5, 6}}; // O(n)
    cout << "List of pairs: ";
    for (auto p : lstPairs) cout << "(" << p.first << ", " << p.second << ") ";
    cout << endl;

    return 0;
}
