#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    vector<int>v;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }
    int a,b,c;
      cin >> a;
      cin >> b >> c;
      v.erase(v.begin()+(a-1));
      v.erase(v.begin()+(b-1),v.begin()+(c-1));
      cout << v.size() << endl;
      for( auto u : v){
        cout << u << " ";

      }
      cout << endl;

}

