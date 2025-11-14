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
    int x = n;
    if(x%2==1)x--;
    for(int i=1;i<=n;i+=2){
        if(x>1)cout << x << ' ';
       cout << i << ' ';
       x-=2;
     }
     cout << el;
    }
    return 0;
}
