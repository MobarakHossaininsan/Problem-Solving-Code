#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,ans=0,j,k=0;
    vector<int>v;
    cin >> a;
    while(a--)
    {
        cin >> n;
        k++;
        v.push_back(n);
         if(n%2 != 0)
        {
            ans++;
            j = k;
        }
    }
   if(ans==1)
    {
        cout << j << endl;
    }
    else{
            ans = 0;
    for(int i=0; i<v.size(); i++)
    {

         if(v[i]%2 == 0)
        {
            ans++;
            j = i;
        }
    }
    if(ans==1)
    {
        cout << j+1 << endl;
    }
  }

}

