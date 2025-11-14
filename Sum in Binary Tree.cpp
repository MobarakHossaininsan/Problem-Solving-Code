#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,ans=0;
        cin >> n;
         while(n != 0){
            ans += n;
            n=n/2;
         }
        cout << ans << endl;
    }
}

