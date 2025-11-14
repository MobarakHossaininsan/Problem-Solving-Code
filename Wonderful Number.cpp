#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(int n,int i){
    ll ans=1;
    while(i--){
        ans *= n;
    }
    return ans;
}
int main(){
    int n,m; cin >> n >> m;
    ll ans = 0;
    for(int i=2;i<=m;i+=2){
        ans += power(n,i);
    }
    cout << ans << endl;
    return 0;
}
