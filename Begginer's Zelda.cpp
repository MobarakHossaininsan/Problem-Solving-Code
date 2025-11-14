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
        int f[n+1] = {0},a,b;
        for(int i=1;i<n;i++){
            cin >> a >> b;
            f[a]++;
            f[b]++;
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(f[i]==1){
             cnt++;
             f[i] = 0;
            }
        }
        cout << (cnt+1)/2 << el;
     }
     return 0;
}

