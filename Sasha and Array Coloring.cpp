#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b,ans=0;
        cin >> a;
        vector<int>v;
        for(int i=0;i<a;i++){
            cin >> b;
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        int x = a/2;
         for(int i=0;i<x;i++){
            ans += (v[a-1]-v[i]);
            a--;
        }
        cout << ans << endl;
    }
}
