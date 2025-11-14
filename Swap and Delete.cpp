#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main() {
    ios_base::sync_with_stdio(0);
   cin.tie(0);
    int t; cin >> t;
    while(t--){
       string s,t; cin >> s;
       t = s;
       int cnt0=0,cnt1=0,n=s.size();
       for(int i=0;i<n;i++){
        if(s[i]=='0') cnt0++;
        else cnt1++;
       }
       if(cnt0==cnt1){
        cout << 0 << '\n';
       }
       else{
        for(int i=0;i<n;i++){
          if(s[i]=='0' && cnt1 > 0){
             s[i] = '1';
             cnt1--;
          }
          else if(s[i]=='1' && cnt0 > 0){
             s[i] = '0';
             cnt0--;
          }
         }
         int count = 0,j=0;
         for(int i=0;i<n;i++){
            if(s[i]!=t[j]){
                j++;
                continue;
            }
            else{
                count++;
            }
         }
         cout << count << '\n';
       }
  }
    return 0;
}
