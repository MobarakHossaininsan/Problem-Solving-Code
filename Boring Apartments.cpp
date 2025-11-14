#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin >> s;
        int x = s[0]-'0'-1;
        int l = s.size();
        int ans = 10*x+(l*(l+1))/2;
        cout << ans << endl;
    }
}
