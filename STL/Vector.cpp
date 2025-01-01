#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse
#include <numeric>   // For accumulate

using namespace std;

int main() {
    // 1. Initialization of a vector
    vector<int> vec1 = {1, 2, 3, 4, 5}; // Time Complexity: O(n)
    vector<int> vec2(5, 10);            // Initializes vec2 with size 5 and all values as 10. O(n)

    // 2. Accessing Elements
    cout << "First element: " << vec1[0] << endl; // O(1)
    cout << "Element at index 2: " << vec1.at(2) << endl; // O(1)

    cout<<"Front Item is: "<<vec1.front()<<endl;
    cout<<"Front Item is: "<<vec1.back()<<endl;

    // 3. Adding Elements
    // vec1.push_front(0); // Not available in vector
    vec1.push_back(6); // Adds an element to the end. Amortized O(1)
    vec1.push_back(7);
    cout << "After push_back: ";
    for (int x : vec1) cout << x << " ";
    cout << endl;

    // 4. Removing Elements
    vec1.pop_back(); // Removes the last element. O(1)
    cout << "After pop_back: ";
    for (int x : vec1) cout << x << " ";
    cout << endl;

    // 5. Iterating through a vector
    cout << "Elements in vec1: ";
    for (int x : vec1) cout << x << " "; // O(n)
    cout << endl;

    // 6. Sorting
    vector<int> vec3 = {5, 1, 4, 2, 8};
    sort(vec3.begin(), vec3.end()); // Sorts in ascending order. O(n log n)
    cout << "After sort: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;

    // 7. Reversing
    reverse(vec3.begin(), vec3.end()); // Reverses the vector. O(n)
    cout << "After reverse: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;

    // 8. Finding Sum of Elements
    int sum = accumulate(vec3.begin(), vec3.end(), 0); // O(n)
    cout << "Sum of elements: " << sum << endl;

    // 9. Finding Maximum and Minimum Elements
    int maxElem = *max_element(vec3.begin(), vec3.end()); // O(n)
    int minElem = *min_element(vec3.begin(), vec3.end()); // O(n)
    cout << "Maximum element: " << maxElem << ", Minimum element: " << minElem << endl;

    // 10. Erasing Elements
    vec3.erase(vec3.begin() + 2); // Removes the element at index 2. O(n)
    cout << "After erase: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;

    vec3.erase(vec3.begin(), vec3.begin() + 2); // Removes first two elements. O(n)
    cout << "After range erase: ";
    for (int x : vec3) cout << x << " ";
    cout << endl;

    // 11. Clearing the Vector
    vec3.clear(); // Removes all elements. O(n)
    cout << "After clear, size of vec3: " << vec3.size() << endl;

    // 12. Resizing the Vector
    vec2.resize(3); // Resizes to 3 elements. O(n)
    cout << "After resize, vec2: ";
    for (int x : vec2) cout << x << " ";
    cout << endl;

    // 13. Checking Size and Capacity
    cout << "Size of vec1: " << vec1.size() << endl;      // O(1)
    cout << "Capacity of vec1: " << vec1.capacity() << endl; // O(1)

    // 14. Inserting Elements
    vec1.insert(vec1.begin() + 2, 100); // Inserts 100 at index 2. O(n)
    cout << "After insert: ";
    for (int x : vec1) cout << x << " ";
    cout << endl;

    // 15. Emplace Back
    vec1.emplace_back(50); // Adds an element to the end. O(1)
    cout << "After emplace_back: ";
    for (int x : vec1) cout << x << " ";
    cout << endl;

    // 16. Using a Vector of Pairs
    vector<pair<int, int>> vecPairs = {{1, 2}, {3, 4}, {5, 6}}; // O(n)
    cout << "Vector of pairs: ";
    for (auto p : vecPairs) cout << "(" << p.first << ", " << p.second << ") ";
    cout << endl;

    // 17. Checking if a Vector is Empty
    if (vec3.empty()) cout << "vec3 is empty\n"; // O(1)

    // Access in reverge order
    /*cout<<*--marks.rend()<<endl; // *{1,2,3} points in address of star position. before the vector.
    // {1,4,2,3} .rbegin() will point in address of 3;
    cout<<*marks.rbegin()<<endl;
    cout<<*++marks.rbegin()<<endl; // ++ will get the pointer in address of 2 of {1,4,2,3}*/
}
