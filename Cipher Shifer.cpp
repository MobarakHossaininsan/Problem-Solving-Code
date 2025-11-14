#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >>n >> s;
        vector<char>v;
        char ch = s[0];
        for(int i=1;i<n;i++){
            if(ch == s[i]){
                v.push_back(s[i]);
                ch = s[i+1];
                i++;
            }
        }
        for( auto u : v){
            cout << u;
        }
        cout << "\n";
    }
}
