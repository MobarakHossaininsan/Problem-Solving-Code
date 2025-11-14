#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
       string s,s1;
       int a;
       cin >> a >> s;
       s1="Timru";

       if(a==5){
        sort(s.begin(),s.end());
        if(s1==s){
            cout << "YES" << endl;
        }
        else{
        cout << "NO" << endl;
         }
       }
       else{
        cout << "NO" << endl;
       }
    }
}

