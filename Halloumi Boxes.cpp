#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(is_sorted(a,a+n)||m>1) cout << "YES\n";
        else cout << "NO\n";
     }
    return 0;
}
