#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i=1,ans,ans2,count;
    cin >> a >> b;
    while(1){
        ans = (a*i)%10;
        ans2 = a-(a-ans);
        count = i;
        if(ans2==b){
            break;
        }
        else if(ans2==0){
            break;
        }
        i++;
    }
    cout << count << endl;
}
