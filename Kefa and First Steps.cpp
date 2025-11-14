#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,count=0,ans=0,i,x;
    cin >> a;
    int r[a];
    for(i=0;i<a;i++){
        cin >> b;
        r[i]=b;
    }
    for(i=0;i<a;i++){
        if(r[i] <= r[i+1]){
            count++;
            if(count > ans){
                ans = count;
                x = i;
            }
        }
        else{
            count=0;
        }
    }
    if(x==(a-1)) cout << ans << endl;
     else cout << ans+1 << endl;
}

