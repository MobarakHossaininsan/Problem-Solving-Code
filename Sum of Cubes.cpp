#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const ll N = 1e12;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   unordered_set<ll>s;
    for(ll i=1;i*i*i<=N;i++){
        s.insert(i*i*i);
    }
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        int flag=0;
     for(ll i=1;i*i*i<=n;i++){
        if(s.count(n-i*i*i)){
            cout << "YES\n";
            flag=1;
            break;
        }
    }
    if(flag==0) cout << "NO\n";
}
    return 0;
}
