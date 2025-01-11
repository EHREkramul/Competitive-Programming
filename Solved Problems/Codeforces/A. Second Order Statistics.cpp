// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;


// <--------------------------------------- Main Program --------------------------------------->
int main(){
    int n; cin>>n;

    set<int> nums;

    
    for(int i=0; i < n; i++){
        int a; cin>>a;
        nums.insert(a);
    }


    if(nums.size() < 2){
        cout << "NO";
    }else{
        auto i = nums.begin();
        advance(i, 1);

        cout<<*i;
    }
}