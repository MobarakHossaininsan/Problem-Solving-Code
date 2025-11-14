#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
      string s; cin >> s;
      int a[]={10,1,2,3,4,5,6,7,8,9};
      int p = s[0]-'0';
      int sum = a[p];
      for(int i=1;i<s.size();i++){
        int ans = abs(a[p] - a[s[i]-'0'])+1;
        sum += ans;
        p = s[i]-'0';
      }
      cout << sum << '\n';
    }
    return 0;
}

