#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,ans=0;
    cin >> num;
    while(num != 0){
        if(num>=100){
            ans= ans + num/100;
            num=num%100;
        }
        else if(num>=20){
            ans= ans + num/20;
            num=num%20;
        }
        else if(num>=10){
            ans= ans + num/10;
            num=num%10;
        }
        else if(num>=5){
            ans= ans + num/5;
            num=num%5;
        }
        else {
            ans= ans + num;
            num=0;
        }

    }
    cout << ans << endl;
}
