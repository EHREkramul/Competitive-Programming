// In The Name of Almighty ALLAH
// Author: Ekramul Haque
#include <bits/stdc++.h>
using namespace std;


// <--------------------------------------- Main Program --------------------------------------->
int main(){
    int n; cin>>n;

    int p[n];
    int a[n];
    int b[n];

    for(int i=1; i<=n; i++) cin>>p[i];
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];

    priority_queue<int, vector<int>, greater<int>> pq[4][4];
    
    for(int i=1; i<=n; i++){
        pq[a[i]][b[i]].push(p[i]);
    }

    int m; cin>>m;
    int f, r;

    for(int i=1; i<=m; i++){
        int c; cin>>c;
        int minn = INT_MAX;
        for(int x=1; x<=3; x++){
            if(!pq[c][x].empty() && pq[c][x].top() < minn){
                minn = pq[c][x].top();
                f = c;
                r = x;
            }
        }
        for(int x=1; x<=3; x++){
            if(!pq[x][c].empty() && pq[x][c].top() < minn){
                minn = pq[x][c].top();
                f = x;
                r = c;
            }
        }

        if(minn != INT_MAX){
            cout<<minn<<" ";
            pq[f][r].pop();
        }else{
            cout<<-1<<" ";
        }
    }
}