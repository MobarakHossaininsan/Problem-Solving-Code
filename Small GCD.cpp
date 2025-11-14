#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++){
      cin >> a[i];
    }
    sort(a,a+n+1);
    int ans = 0;

    for(int j=1;j<n-1;j++){
        for(int i=j+1;i<n;i++){
        ans += __gcd(a[j],a[i+1]);
        //ans += gcd*(n-i);
      }
    }
      cout << ans << '\n';
    }
    return 0;
}
