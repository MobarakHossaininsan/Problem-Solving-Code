#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        string s;
        cin >> s;
        int count=0;
        for(int i=0;i<b;i++){
           if(s[i]=='W') count++;
        }
            int ans = count;
        for(int i=b;i<a;i++){
           if(s[i]=='W') count++;
           if(s[i-b]=='W') count--;
           ans = min(ans,count);
        }
        cout << ans << endl;
    }
    return 0;
}
