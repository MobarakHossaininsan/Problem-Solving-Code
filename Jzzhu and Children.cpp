#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
const int N = 1e6+5;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);

    int n,m; cin >> n >> m;
    int a[n+1],b[N];
    for(int i=1;i<=n;i++){
      cin >> a[i];
    }
    int t=1;
    for(int i=1;i<=n;i++){
      if(a[i] > m){
         b[t] = i;
         t++;
         a[i] = a[i] - m;
      }
    }
    for(int i=1;i<t;i++){
      cout << b[i] << " ";
      }
    return 0;
}
