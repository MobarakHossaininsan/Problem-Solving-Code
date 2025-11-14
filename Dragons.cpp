#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,x,y,count=0;
    vector<pair<int,int>>v;
    cin >> s >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(s > v[i].first){
            s += v[i].second;
            count++;
        }
    }
    if(count==n) cout << "YES" << endl;
    else cout << "NO" << endl;
}


