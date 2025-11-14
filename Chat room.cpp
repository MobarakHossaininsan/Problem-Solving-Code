#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,v="hello";
    cin >> s;
   int a=0,b=0;
   for(int i=0;i<s.size();i++){
    if(s[i]==v[a]){
        a++;
        b++;
    }
   }
    if(b == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
}

