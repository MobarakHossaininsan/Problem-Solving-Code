#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,s,flag=1;
        cin >>n;
        vector<int>v;
        for(int i=0;i<n;i++){
               cin >> s;
                v.push_back(s);
        }
        sort(v.begin(),v.end());
        int k = v[0];
        for(int i=1;i<n;i++){
             if(v[i]%2==1 && (v[i]-k)%2==1){
                cout << "NO\n";
                flag=0;
                break;
             }
             else{
                flag=1;
             }
        }
        if(flag==1){
        cout << "YES\n";
        }
    }
}
