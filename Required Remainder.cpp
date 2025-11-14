#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main() {
    ios_base::sync_with_stdio(0);
   cin.tie(0);
    int t; cin >> t;
    while(t--){
       int x,y,n; cin >> x >> y >> n;
       int ans = (n-y)/x;
       cout << (x*ans)+y << '\n';
  }
    return 0;
}
