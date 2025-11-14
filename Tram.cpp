#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,sum=0,ans;
    cin >> a;
        ans = sum;
    while(a--){
        cin >> b >> c;
        sum -= b;
        sum += c;
        if(sum > ans){
            ans = sum;
        }

    }
    cout << ans << endl;
}
