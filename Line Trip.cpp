#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,x; cin >> n >> x;
        int a[n+1];
        a[0] = 0;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,abs(a[i]-a[i+1]));
            }
            ans = max(ans,(2*(x-a[n])));
            cout << ans << '\n';
        }
    return 0;
}
