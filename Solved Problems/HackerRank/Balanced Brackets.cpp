// Ekramul-Haque
// In The Name of Almighty ALLAH
#include <bits/stdc++.h>
using namespace std;


// <--------------------------------------- Main Program --------------------------------------->
int main(){
    int t; cin>>t;
    
    while(t--){
        string s; cin>>s;
        stack<char> brace;

        for(auto ch:s){
            if(ch == '(' || ch == '{' || ch == '['){
                brace.push(ch);
            }else{
                if(brace.empty()){
                    brace.push(ch);
                    break;
                }
                if(ch == ')'){
                    if(brace.top() == '('){
                        brace.pop();
                    }else{
                        break;
                    }
                }
                else if(ch == '}'){
                    if(brace.top() == '{'){
                        brace.pop();
                    }else{
                        break;
                    }
                }
                else if(ch == ']'){
                    if(brace.top() == '['){
                        brace.pop();
                    }else{
                        break;
                    }
                }
            }
        }
        if(brace.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}