#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,v;
    cin >> s >> v;
    reverse(s.begin(),s.end());
    if(s == v) cout << "YES" << endl;
    else cout << "NO" << endl;
}
