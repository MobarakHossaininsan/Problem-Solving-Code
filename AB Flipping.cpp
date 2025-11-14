#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    clock_t st = clock();
    int t; cin >> t;
    while(t--){
      int n; string s;
      cin >> n >> s;
     int ans=0,count=0;
      for(int i=0;i<n;i++){
         if(s[i]=='A'){
           ++count;
         }
         else{
            ans += count;
            if(count) count=1;
         }
      }
      cout << ans << "\n";
    }
    clock_t en = clock();
    cout << 1.0 * (en-st) / CLOCKS_PER_SEC << "s\n";
    return 0;
}
