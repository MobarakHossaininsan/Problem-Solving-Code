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
    vector<int>f(26,-1);
    string ans;
    for(int i=0,a;i<n;i++){
        cin >> a;
        for(char i='z';i>='a';i--){
            if(f[i-'a']==a-1){
              f[i-'a']++;
              ans+=i;
              break;
            }
        }
    }
     cout << ans << el;
   }
    return 0;
}
