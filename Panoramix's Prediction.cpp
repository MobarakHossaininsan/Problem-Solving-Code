#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool func(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
    int n,m; cin >> n >> m;
     for(int i=n+1;i<=m;i++){
        if(func(i)){
            if(i==m){
                cout << "YES\n";
                return 0;
            }
            else{
                cout << "NO\n";
                return 0;
            }
        }
     }
    cout << "NO\n";
    return 0;
}



