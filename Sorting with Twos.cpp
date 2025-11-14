#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++){
      cin >> a[i];
    }
    bool flag = true;
    for(int j=2;j<=n;j*=2){
        for(int i=j+1;i<j*2&&i<n;i++){
            if(a[i] > a[i+1])
             flag = false;
      }
    }
    cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}

