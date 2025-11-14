#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
       ll n; cin >> n;
       ll x = sqrt(n);
       ll ans = x*x;
       if(ans == n && ans != 1){

         if(prime(x)){
           cout << "YES\n";
          }
         else{
           cout << "NO\n";
          }
      }
      else{
        cout << "NO\n";
      }
  }
  return 0;
}



