#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,count=0;
    vector<pair<int,int>>v;
    cin >> a;
    for(int i=0; i<a; i++)
    {
        cin >> b >> c;
        v.push_back(make_pair(b,c));
    }
    for(int i=0; i<a; i++)
    {
        for(int j=i+1; j<a; j++)
        {

            if(v[i].first==v[j].second)
            {
                 count++;
            }
            if(v[i].second==v[j].first)
            {
                 count++;
            }
        }
    }
    cout << count << endl;


}

