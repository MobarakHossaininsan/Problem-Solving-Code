#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);

     int k,a,b; cin >> k >> a >> b;
     int x=a,y=b;
     k = k-1;
    for(int i=1;i<=k;i++){
        y = b-x;
        x = y;
     }
    return 0;
}
