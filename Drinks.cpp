#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double ans=0.0;
    cin >> a;
    for(int i=1; i<=a; i++){
            cin >> b;
            ans += b;
        }
        ans = ans/a;
      cout << fixed << setprecision(14) << ans << endl;
}



