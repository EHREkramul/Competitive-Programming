// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Initialization of a Max-Heap (Default)
    priority_queue<int> maxHeap; // Max-Heap: Largest element is on top

    // Adding elements to the Max-Heap
    maxHeap.push(10); // O(log n)
    maxHeap.push(20); // O(log n)
    maxHeap.push(15); // O(log n)
    cout << "Elements added to Max-Heap: 10, 20, 15\n";

    // Accessing the Top Element
    cout << "Top element (Max-Heap): " << maxHeap.top() << endl; // O(1)

    // Removing the Top Element
    maxHeap.pop(); // Removes the largest element (20). O(log n)
    cout << "After pop, top element (Max-Heap): " << maxHeap.top() << endl;

    // 2. Initialization of a Min-Heap
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-Heap: Smallest element is on top

    // Adding elements to the Min-Heap
    minHeap.push(10); // O(log n)
    minHeap.push(20); // O(log n)
    minHeap.push(15); // O(log n)
    cout << "\nElements added to Min-Heap: 10, 20, 15\n";

    // Accessing the Top Element
    cout << "Top element (Min-Heap): " << minHeap.top() << endl; // O(1)

    // Removing the Top Element
    minHeap.pop(); // Removes the smallest element (10). O(log n)
    cout << "After pop, top element (Min-Heap): " << minHeap.top() << endl;

    // 3. Using Custom Comparator with Priority Queue
    auto customComparator = [](int a, int b) {
        return a % 10 > b % 10; // Order by last digit
    };

    priority_queue<int, vector<int>, decltype(customComparator)> customHeap(customComparator);

    // Adding elements to the Custom Priority Queue
    customHeap.push(45); // O(log n)
    customHeap.push(22); // O(log n)
    customHeap.push(13); // O(log n)
    cout << "\nElements added to Custom Priority Queue: 45, 22, 13\n";

    // Accessing the Top Element
    cout << "Top element (Custom Priority Queue): " << customHeap.top() << endl; // O(1)

    // 4. Iterating Over a Priority Queue
    cout << "\nIterating over Max-Heap elements (unordered): ";
    priority_queue<int> temp = maxHeap; // Create a copy
    while (!temp.empty()) {
        cout << temp.top() << " "; // Access the top element
        temp.pop();                // Remove the top element
    }
    cout << endl;

    return 0;
}
