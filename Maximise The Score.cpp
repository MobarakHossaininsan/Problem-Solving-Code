#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--){
    int n; cin >> n;
    int x = n*2;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin >> v[i];
     }
      for(auto i : v)
        cout << i << ' ';
    }
    return 0;
}
