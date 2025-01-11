// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;


// <-------------------------------------------------------------->
int main(){
    int n; cin>>n;
    map<int, int> mp;

    for(int i=0; i<n; i++){
        int a; cin>>a;
        mp[a]++;
    }
    int count=0;
    for(auto i:mp){
        if(i.first != i.second){
            int temp = i.first - i.second;

            if(temp < 0){
                count += abs(i.first - i.second);
            }
            else if(temp > 0){
                count += i.second;
            }
        }
    }

    cout<<count;
}