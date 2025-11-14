#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin >> t;
     while(t--){
        int a,b,c;
        cin >>a>>b>>c;
       int x = 1;
  while (a % 2 == 0) {
    a /= 2;
    x *= 2;
  }
  while (b % 2 == 0) {
    b /= 2;
    x *= 2;
  }
  if(x>=c) cout << "YES\n";
  else cout << "NO\n";
     }
}
