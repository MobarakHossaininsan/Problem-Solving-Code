#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios_base::sync_with_stdio(0);
    cin.tie(0);
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        int a[n+1],flag=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
           if(a[i] < a[ans]){
              ans = i;
           }
        }
        for(int i=ans+1;i<n;i++){
           if(a[i] < a[i-1]){
             cout << -1 << '\n';
             flag=1;
             break;
           }
        }
        if(flag==0) cout << ans << '\n';
     }
    return 0;
}

