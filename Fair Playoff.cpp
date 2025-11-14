#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin >> t;
      while(t--){
       vector<int>v;
       int x;
      for(int i=0;i<4;i++){
        cin >> x;
        v.push_back(x);
      }
      int a=max(v[0],v[1]);
      int b=max(v[2],v[3]);
      sort(v.rbegin(),v.rend());
      if((a==v[0]&&b==v[1])||(a==v[1]&&b==v[0])){
        cout << "YES\n";
      }
      else{
        cout << "NO\n";
      }
      }
}


