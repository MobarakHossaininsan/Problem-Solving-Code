#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int n;
   cin>>n;
    int ar[n];
    ll mini = 0;
    ll maxi= 0;
    for(int i=0;i<n;i++)
    {
        cin>> ar[i];
        maxi+=ar[i];
        mini^=ar[i];
    }
    cout<< (maxi-mini)<<"\n";
   return 0;
}

