#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0;
    vector<int>v;
    cin >> a;
    for(int i=0; i<a; i++)
    {
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for(int j=0; j<v.size(); j++)
    {
        if(v[j]==4)
        {
            ans++;
        }

    else
    {
      if(v[j]+v[j+1] > 4){
        ans++;
      }
      else{
        ans++;
        j = j+1;
      }
    }
  }
  cout << ans << endl;

}



