#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n,m; cin >> n >> m;
    int a;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans = 1;
    int count = 1;
    for(int i=1;i<n;i++){
        if((v[i]-v[i-1])> m){
            count = 1;
        }
        else{
            count++;
        }
        ans = max(ans,count);
    }
    cout << n-ans << '\n';
  }
  return 0;
}



