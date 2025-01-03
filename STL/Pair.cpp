// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

// pair: Combines two values.

int main() {
    // 1. Initialization with Constructor
    pair<int, int> p1(1, 2); // Pair with values 1 and 2
    cout << "Pair p1: (" << p1.first << ", " << p1.second << ")" << endl;

    // 2. Using make_pair
    auto p2 = make_pair(3, 4); // Creates a pair (3, 4)
    cout << "Pair p2: (" << p2.first << ", " << p2.second << ")" << endl;

    // 3. Accessing Elements
    cout << "Accessing p1: first = " << p1.first << ", second = " << p1.second << "" << endl;

    // 4. Updating Elements
    p1.first = 10;
    p1.second = 20;
    cout << "Updated p1: (" << p1.first << ", " << p1.second << ")" << endl;

    // 5. Comparison
    pair<int, int> p3(4, 5), p4(7, 8);
    if (p3 < p4) {
        cout << "p3 is less than p4" << endl;
    }
    if(p3 > p4){
        cout << "p3 is greated than p4" << endl;
    }

    // 6. Swapping Pairs
    cout << "Before swap: p3 = (" << p3.first << ", " << p3.second << "), p4 = (" << p4.first << ", " << p4.second << ")" << endl;
    swap(p3, p4);
    cout << "After swap: p3 = (" << p3.first << ", " << p3.second << "), p4 = (" << p4.first << ", " << p4.second << ")" << endl;

    // 7. Default Initialization
    pair<int, int> p5; // Defaults to (0, 0) for integers
    cout << "Default initialized p5: (" << p5.first << ", " << p5.second << ")" << endl;

    // 8. Pairs in a Vector
    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Vector of pairs:" << endl;
    for (auto p : vec) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    // 9. Sorting a Vector of Pairs
    vector<pair<int, int>> vec2 = {{3, 2}, {1, 5}, {2, 9}, {2, 8}, {1, 8}};
    sort(vec2.begin(), vec2.end()); // Sorts by first, if first equals then by second
    cout << "Sorted vector of pairs:" << endl;
    for (auto p : vec2) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    // 10. Custom Sorting by Second Element
    sort(vec2.begin(), vec2.end(), [](auto a, auto b) {
        return a.second < b.second;
    });
    cout << "Custom sorted vector by second:" << endl;
    for (auto p : vec2) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    // 11. Pairs in a Map
    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";
    cout << "Pairs in a map:" << endl;
    for (auto entry : mp) {
        cout << entry.first << ": " << entry.second << "" << endl;
    }

    // 12. Nested Pairs
    pair<int, pair<int, int>> nestedPair = {1, {2, 3}};
    cout << "Nested pair: (" << nestedPair.first << ", (" << nestedPair.second.first << ", " << nestedPair.second.second << "))" << endl;

    // 13. Returning a Pair from Function
    auto getPair = []() -> pair<int, int> { return {7, 8}; };
    pair<int, int> returnedPair = getPair();
    cout << "Returned pair: (" << returnedPair.first << ", " << returnedPair.second << ")" << endl;

    // 14. Unpacking pair
    int x = p1.first;
    int y = p1.second;
    std::cout << "Unpacked p1: x = " << x << ", y = " << y << "" << endl;

}
