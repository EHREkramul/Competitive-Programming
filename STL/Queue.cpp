// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

// queue: FIFO (First In, First Out) adapter.

int main() {
    // 1. Initialization of a queue
    queue<int> q; // Creates an empty queue

    // 2. Adding Elements
    q.push(10); // Adds 10 to the back of the queue. O(1)
    q.push(20); // Adds 20 to the back of the queue. O(1)
    q.push(30); // Adds 30 to the back of the queue. O(1)
    cout << "Elements added to the queue: 10, 20, 30\n";

    // 3. Accessing the Front and Back Elements
    cout << "Front element: " << q.front() << endl; // O(1)
    cout << "Back element: " << q.back() << endl;   // O(1)

    // 4. Removing Elements
    q.pop(); // Removes the front element (10). O(1)
    cout << "After pop, front element: " << q.front() << endl;

    // 5. Checking the Size of the Queue
    cout << "Size of the queue: " << q.size() << endl; // O(1)

    // 6. Checking if the Queue is Empty
    if (q.empty()) {
        cout << "The queue is empty\n";
    } else {
        cout << "The queue is not empty\n";
    }

    // 7. Iterating Over a Queue (Using Loop and Copy)
    cout << "Remaining elements in the queue: ";
    queue<int> temp = q; // Create a copy of the queue to iterate
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // 8. Clearing the Queue
    while (!q.empty()) {
        q.pop(); // Remove all elements
    }
    cout << "Queue cleared. Is it empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
