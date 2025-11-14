#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int ans = min(a, b);
    while (ans > 0) {
        if (a%ans==0 && b%ans==0) {
            break;
        }
        ans--;
    }
    return ans;
}
int main(){
    int t; cin  >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b;
        int flag=0;
        /*for(int i=1;i<b;i++){
            int ans = b-i;
            if((ans+i)>=a && (ans+i)<=b){
                if(gcd(i,ans) != 1){
                    cout << i << " " << ans << "\n";
                    flag=1;
                    break;
                }
            }
        }*/
        cout << gcd(a,b);
       if(flag==0) cout << -1 << "\n";
    }
    return 0;
}
