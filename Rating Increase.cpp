#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
  int t; cin >> t;
  while(t--){
    string s; cin >> s;
    bool f = false;
    for(int i=0;i<s.size()-1;i++){
        string x = s.substr(0,i);
        string y = s.substr(i);
        int sub1 = stoi(x);
        int sub2 = stoi(y);
        if(sub1 < sub2 && s[i+1]!=0){
            cout << sub1 << ' ' << sub2 << el;
            f=true;
            break;
        }
    }
    if(!f) cout << -1 << el;
  }
    return 0;
}
