// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;


int main(){
    //__builtin_popcountll(): Returns Number of set bits (1).
    int num1 = 6;
    int cnt1 = __builtin_popcount(num1);
    cout << "Number of Set Bits/1 is: " << cnt1 <<endl;

    // __builtin_popcountll() used if the number is long long
    long long num2 = 34123411234;
    int cnt2 = __builtin_popcountll(num2);
    cout << "Number of Set Bits/1 is: " << cnt2 <<endl;


    string s = "123";
    cout<< "Permutations of "<< s << "are:"<<endl;
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
    cout<<"End Permutations: " <<s<<endl;

    cout<< *max_element(s.begin(), s.end());
}