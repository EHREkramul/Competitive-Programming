// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;


// <--------------------------------------- Main Program --------------------------------------->
int main(){
    int t; cin>>t;
    
    while(t--){
        int n,k; cin>>n>>k;

        int maxx = 0;
        deque<int> dq;
        deque<int>::iterator itr;

        for(int i=0; i<n; i++){
            int a; cin>>a; 
            dq.push_back(a);
        }

        

        while(dq.size() >= k){

            // First k elements operation
            itr = dq.begin();
            for(int i=0; i<k; i++){
                maxx = max(maxx, *itr);
                itr++;
            }
            cout<<maxx<<" ";

            while((dq.front() != maxx) && itr != dq.end()){
                maxx = max(maxx, *itr);
                itr++;

                cout<<maxx<<" ";
                dq.pop_front();
            }
            maxx = 0;
            dq.pop_front();
        }
        cout<<endl;
    }
}