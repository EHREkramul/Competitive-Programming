// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

int main() {
    // =============================
    // 1. String Handling-------------------------------------------------------------------------------------------------------
    // =============================
    cout << "### STRING HANDLING ###\n";

    // Initializing and appending
    string s1 = "Hello";
    string s2 = " World";
    s1.append(s2); // Appends s2 to s1. O(n)
    cout << "Appended string: " << s1 << endl;

    // Substring
    string sub = s1.substr(6, 5); // Extracts "World". O(n)
    cout << "Substring: " << sub << endl;

    // Find
    auto pos = s1.find("World"); // Finds the position of "World". O(n)
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << endl;
    }

    // Replace
    s1.replace(pos, 5, "Universe"); // Replaces "World" with "Universe". O(n)
    cout << "String after replacement: " << s1 << endl;

    // Erase
    // s1 : "Hello Universe"
    s1.erase(5, 9); // Removes "Universe". O(n)
    cout << "String after erasing: " << s1 << endl;

    // =============================
    // 2. Lambda Functions-------------------------------------------------------------------------------------------------------
    // =============================
    cout << "\n### LAMBDA FUNCTIONS ###\n";

    // Custom sorting using lambda
    vector<int> v = {3, 1, 4, 1, 5, 9};
    cout << "Original vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Sort in descending order
    sort(v.begin(), v.end(), [](int a, int b) { return a > b; }); // O(n log n)
    cout << "Vector sorted in descending order: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Filtering with lambda
    cout << "Numbers greater than 3: ";
    for_each(v.begin(), v.end(), [](int x) {
        if (x > 3) cout << x << " "; // O(n)
    });
    cout << endl;

    // =============================
    // 3. Smart Pointers-------------------------------------------------------------------------------------------------------
    // =============================
    cout << "\n### SMART POINTERS ###\n";

    // unique_ptr
    unique_ptr<int> up = make_unique<int>(10); // O(1)
    cout << "Value pointed by unique_ptr: " << *up << endl;

    // shared_ptr
    shared_ptr<int> sp1 = make_shared<int>(20); // O(1)
    shared_ptr<int> sp2 = sp1; // Both sp1 and sp2 share ownership
    cout << "Value pointed by shared_ptr: " << *sp1 << " (use_count: " << sp1.use_count() << ")\n";

    // weak_ptr
    weak_ptr<int> wp = sp1; // Does not contribute to the reference count
    cout << "Weak_ptr use_count: " << wp.use_count() << endl;
    if (auto sp3 = wp.lock()) { // Lock returns a shared_ptr if the object is still valid
        cout << "Value from weak_ptr: " << *sp3 << endl;
    }

    return 0;
}
