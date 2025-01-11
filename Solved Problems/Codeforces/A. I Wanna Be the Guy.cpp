// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;


// <--------------------------------------- Main Program --------------------------------------->
int main(){
    int n; cin>>n;

    set<int> levels;

    int p;
    cin>>p;
    
    for(int i=0; i < p; i++){
        int a; cin>>a;
        levels.insert(a);
    }

    cin>>p;
    for(int i=0; i < p; i++){
        int a; cin>>a;
        levels.insert(a);
    }


    if(levels.size() < n){
        cout << "Oh, my keyboard!";
    }else{
        cout << "I become the guy.";
    }

}