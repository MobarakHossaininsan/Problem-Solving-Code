#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
     int t; cin >> t;
     while(t--){
        int n,L,t;
        ll P;
        cin >> n >> P >> L >> t;
        ll c = (n-1)/7+1;
        int l=0,r=n;
        int result=0;
        while(l <= r){
            ll k = (l+r)/2;
            ll m = n - k;
             ll ans = (m*L + min(c,2*m)*t);
            if(ans >= P){
               result = k;
               l = k+1;
            }
            else{
                r = k-1;
            }
        }
        cout << result << '\n';
  }
    return 0;
}
