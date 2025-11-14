#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

      int n; cin >> n;
      vector<ll>v,s;
      ll sum = 0,p;
      for(int i=0;i<n;i++){
         cin >> p;
         v.push_back(p);
         sum += p;
      }
      cout << sum << "\n";
       ll ans = sum;
      for(int i=0;i<n;i++){
         if(sum%2==0){
            s[i] = v[i];
            v.erase(v.begin());
            sum = accumulate(v.begin(),v.end(),0);
            //cout << sum << ' ';
         }
         else{
            reverse(v.begin(),v.end());
            s[i] = v[i];
             v.erase(v.begin());
            sum = accumulate(v.begin(),v.end(),0);
            //cout << sum << ' ';
         }
      }
      cout << ans << '\n';
      for(int i=0;i<n;i++){
         cout << s[i] << " ";
      }
    return 0;
}
