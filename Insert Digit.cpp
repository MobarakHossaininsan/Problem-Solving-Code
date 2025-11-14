#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char m;
        string s;
        cin >>n >> m >> s;
        vector<char>v;
        for(int i=0;i<n;i++){
            v.push_back(s[i]);
          }
        v.push_back(m);
        sort(v.rbegin(),v.rend());
        for( auto u : v){
            cout << u;
        }
        cout << "\n";
    }
}

