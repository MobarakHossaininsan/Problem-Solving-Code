#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ans,result=0;
    cin >> a >> b;
    ans = b;
    a = a-1;
    while(a--){
        cin >> c;
        if(c != ans){
            result++;
            ans = c;
        }
    }
    cout << result+1 << endl;
}
