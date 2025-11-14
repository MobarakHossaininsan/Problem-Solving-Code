#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,ans,ans1;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> b;
        sum += b;
    }
    ans1 = sum%4;
    ans = sum/4;
    if(ans1 == 0)  cout << ans << endl;
    else cout << (ans+1) << endl;
}

