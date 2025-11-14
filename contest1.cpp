#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int n,m; cin >> n >> m;
    int a[n+1],b[n+1];
    vector<pair<int>>v;
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    for(int i=0;i<n;i++){
      cin >> b[i];
    }
    for(int i=0;i<n;i++){
      v.push_bacK(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
      cout << v[i].second << '\n';
    }
    return 0;
}

