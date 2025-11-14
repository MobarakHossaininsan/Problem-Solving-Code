#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--){
    int n; cin >> n;
    string s; cin >> s;
    int i=0;
    string ans;
    while (i < n){
        if (i+2 < n && (s[i]=='b' || s[i]=='c' || s[i]=='d') &&
            (s[i+1]=='a' || s[i+1]=='e') && (s[i+2]=='b' || s[i+2]=='c' || s[i+2]=='d')){
            ans += s.substr(i,3);
            i += 3;
        }
        else if (i+1 < n && (s[i] =='b' || s[i]=='c' || s[i]=='d') &&
                 (s[i+1] == 'a' || s[i+1]=='e')) {
            ans += s.substr(i,2);
            i += 2;
        }
        else{
            ans += s[i];
            i += 1;
        }
        if (i < n) {
            ans += '.';
        }
    }
    cout << ans << '\n';
}
    return 0;
}
