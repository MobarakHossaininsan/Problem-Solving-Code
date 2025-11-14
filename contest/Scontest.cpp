#include<bits/stdc++.h>
using namespace std;
bool done(char x, char y)
{
    return(x=='(' && y==')') || (x=='{'&&y=='}')||(x=='['&&y==']');
}
int main(){
    int a;
    cin >> a;
    while(a--){
        string s;
        cin >> s;
        stack<char>v;
         bool ans=1;
         for( auto u : s){
            if( u == '(' || u == '{' || u == '[') v.push(u);
         else {
             if(v.empty()){
                ans = 0;
                break;
             }
             else{

            if(done(v.top(),u)){
                v.pop();
            }
            else {
                ans = 0;
                break;
            }
          }
       }
    }
    if(!v.empty()) ans = 0;
    if(ans) cout << "YES\n";
    else cout << "NO\n";
}
    }
