// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

// stack: LIFO (Last In, First Out) adapter.

int main() {
    // 1. Initialization of a stack
    stack<int> st; // Creates an empty stack

    // 2. Adding Elements
    st.push(10); // Pushes 10 onto the stack. O(1)
    st.push(20); // Pushes 20 onto the stack. O(1)
    st.push(30); // Pushes 30 onto the stack. O(1)
    cout << "Elements pushed onto the stack: 10, 20, 30\n";

    // 3. Accessing the Top Element
    cout << "Top element: " << st.top() << endl; // O(1)

    // 4. Removing Elements
    st.pop(); // Removes the top element (30). O(1)
    cout << "After pop, top element: " << st.top() << endl;

    // 5. Checking the Size of the Stack
    cout << "Size of the stack: " << st.size() << endl; // O(1)

    // 6. Checking if the Stack is Empty
    if (st.empty()) {
        cout << "The stack is empty\n";
    } else {
        cout << "The stack is not empty\n";
    }

    // 7. Iterating Over a Stack (Using Temporary Stack)
    cout << "Remaining elements in the stack: ";
    stack<int> temp = st; // Create a copy of the stack
    while (!temp.empty()) {
        cout << temp.top() << " "; // Access the top element
        temp.pop();                // Remove the top element
    }
    cout << endl;

    // 8. Clearing the Stack
    while (!st.empty()) {
        st.pop(); // Remove all elements
    }
    cout << "Stack cleared. Is it empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
