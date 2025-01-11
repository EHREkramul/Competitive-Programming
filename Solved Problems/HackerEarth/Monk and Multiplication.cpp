// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;


// <--------------------------------------- Main Program --------------------------------------->
int main(){
    long long n; cin>>n;

    priority_queue<long long> pq;
    long long x, y, z;
    for (int i=0; i<n; i++){
        long long product = -1;
        long long a; cin>>a;
        pq.push(a);

        if(i >= 2){
            x = pq.top(); pq.pop();
            y = pq.top(); pq.pop();
            z = pq.top(); pq.pop();

            product = x * y * z;

            pq.push(z);
            pq.push(y);
            pq.push(x);
        }

        cout<<product<<endl;
    }
}