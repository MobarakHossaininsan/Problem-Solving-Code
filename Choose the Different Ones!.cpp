#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--){
    int n,m,k; cin >> n >> m >> k;
    set<int>a,b,c;
    for(int i=0,x;i<n;i++){
        cin >> x;
        if(x<=k){
            a.insert(x);
            c.insert(x);
        }
    }
    for(int i=0,x;i<m;i++){
        cin >> x;
        if(x<=k){
            b.insert(x);
            c.insert(x);
        }
    }
    if(a.size()>=k/2&&b.size()>=k/2&&c.size()==k)
        cout << "YES" << el;
    else
        cout << "NO" << el;
   }
    return 0;
}
