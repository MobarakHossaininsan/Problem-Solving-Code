#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    long long x,ans;
    cin >> a;
    while(a--){
        cin >> x;
        if(x%2==0){
            ans = (x/2)-1;
            cout << ans << endl;
        }
        else{
            ans = ((x+1)/2)-1;
            cout << ans << endl;
        }
    }
}




