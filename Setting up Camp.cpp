#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--){
    int a,b,c; cin >> a >> b >> c;
    if(a==0&&b==0&&c==0){
        cout << 0 << '\n';
    }
    else{
       int ext=0,d=0;
       if(b%3!=0){
         d = 3-(b%3);
       }
       if(d>c){
        cout << -1 << '\n';
       }
       else{
        int ans = a+((b+d)/3);
        if((c-d)%3==0) ans+= (c-d)/3;
        else ans+= ((c-d)/3)+1;
        cout << ans << '\n';
       }
    }
}
    return 0;
}
