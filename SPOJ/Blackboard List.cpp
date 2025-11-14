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
      vector<int>v(n);
      for(int i=0;i<n;i++){
        cin >> v[i];
      }
      int mn = *min_element(v.begin(),v.end());
      int mx = *max_element(v.begin(),v.end());
      if(mn<0){
        cout << mn <<  el;
      }
      else {
        cout << mx << el;
      }
    }

    return 0;
}
