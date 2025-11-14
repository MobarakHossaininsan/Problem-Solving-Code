#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t; cin >> t;
    while(t--){
      int n; cin >> n;
      int a[n+1];
      ll v[n+1];
      for(int i=1;i<=n;i++){
          cin >> a[i];
      }
      ll sum = 0,ans=0;
      for(int i=n;i>0;i--){
          v[i] = (sum += 1LL*a[i]);
      }
      ans = v[1];
      for(int i=2;i<=n;i++){
          if(v[i] > 0){
            ans += v[i];
          }
      }
      cout << ans << '\n';
    }
    return 0;
}
