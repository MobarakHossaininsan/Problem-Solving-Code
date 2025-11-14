#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
    int n,s; cin >> n >> s;
    if(s%n==0) cout << s/n << '\n';
    else cout << (s/n)+1 << '\n';
  return 0;
}



