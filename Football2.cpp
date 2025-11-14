#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string o,s1,s;
    cin >>t;
    vector<string>v;
    for(int i=0; i<t; i++)
    {
        cin >> o;
        v.push_back(o);
    }
    int a=1,b=0;
     s = v[0];
    for(int i=1; i<t; i++)
    {
        if(s==v[i])
        {
            a++;
        }
        else
        {
            b++;
            s1 = v[i];
        }
    }
    if(a>b) cout << s << endl;
    else cout << s1 << endl;
}

