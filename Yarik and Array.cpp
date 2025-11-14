#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int s; cin >> s;
        v.push_back(s);
    }
    int ans = 0,sum = 0;
    for(int i=0;i<n-1;i++){
        if((v[i]%2==0&&v[i+1]%2==0)||(v[i]%3==0&&v[i+1]%3==0)){
            ans = max(ans,sum);
        }
        else{
            sum += v[i];
            ans = max(ans,sum);
        }
    }
    cout << ans << '\n';
  }
    return 0;
}





