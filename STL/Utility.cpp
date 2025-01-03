// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. Using pair------------------------------------------------------------------------------------------------------------------------------------------------------------
    pair<int, string> p1 = {1, "One"}; // Initializes a pair
    cout << "Pair 1: {" << p1.first << ", " << p1.second << "}\n"; // Access first and second

    pair<int, string> p2 = make_pair(2, "Two"); // Using make_pair
    cout << "Pair 2: {" << p2.first << ", " << p2.second << "}\n";

    // Pair Comparisons
    pair<int, int> a = {10, 20};
    pair<int, int> b = {10, 30};
    if (a < b) {
        cout << "Pair {10, 20} is less than Pair {10, 30}\n";
    }

    // Swapping pairs
    cout << "Before swap: Pair 1: {" << p1.first << ", " << p1.second << "}, Pair 2: {" << p2.first << ", " << p2.second << "}\n";
    swap(p1, p2); // Swap two pairs
    cout << "After swap: Pair 1: {" << p1.first << ", " << p1.second << "}, Pair 2: {" << p2.first << ", " << p2.second << "}\n";

    // 2. Using tuple------------------------------------------------------------------------------------------------------------------------------------------------------------
    tuple<int, string, double> t1 = make_tuple(1, "Tuple", 3.14); // Initializes a tuple
    cout << "Tuple: {" << get<0>(t1) << ", " << get<1>(t1) << ", " << get<2>(t1) << "}\n";

    // Modifying tuple
    get<1>(t1) = "Modified";
    cout << "Modified Tuple: {" << get<0>(t1) << ", " << get<1>(t1) << ", " << get<2>(t1) << "}\n";

    // Comparing tuples
    tuple<int, int, int> t2 = {1, 2, 3};
    tuple<int, int, int> t3 = {1, 2, 4};
    if (t2 < t3) {
        cout << "Tuple {1, 2, 3} is less than Tuple {1, 2, 4}\n";
    }

    // 3. Using tie------------------------------------------------------------------------------------------------------------------------------------------------------------
    a = make_pair(30,20);
    t2 = make_tuple(5,6,7);
    t3 = make_tuple(1,2,3);
    int x, y;
    tie(x, y) = a; // Unpacking pair
    cout << "After tie: x = " << x << ", y = " << y << endl;

    // Using tie with tuples
    int i, j, k;
    tie(i, j, k) = t2;
    cout << "After tie with tuple: i = " << i << ", j = " << j << ", k = " << k << endl;

    // Ignore elements with tie
    tie(i, ignore, k) = t3; // Ignore the second element
    cout << "After ignoring: i = " << i << ", k = " << k << endl;

    return 0;
}
