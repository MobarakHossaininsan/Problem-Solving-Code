#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int t; cin >> t;
    while(t--){
      vector<int>v(3);
      for(int i=0;i<3;i++){
        cin >> v[i];
      }
      int m; cin >> m;
      sort(v.rbegin(),v.rend());
      int mx = v[0]+v[1]+v[2]-3;
      int mn = v[0]-v[1]-v[2]-1;
      if(m>=mn&&m<=mx) cout << "YES" << el;
      else cout << "NO" << el;
    }
    return 0;
}
