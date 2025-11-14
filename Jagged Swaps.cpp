#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        if(a[1] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
