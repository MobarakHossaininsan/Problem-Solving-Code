#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main() {
    ios_base::sync_with_stdio(0);
   cin.tie(0);
    int n; cin >> n;
    if(n == 0)
  cout << 1 << '\n';
    else if(n % 4 == 1)
  cout << 8 << '\n';
    else if(n % 4 == 2)
  cout << 4 << '\n';
    else if(n % 4 == 3)
  cout << 2 << '\n';
    else if(n % 4 == 0)
  cout << 6 << '\n';
    return 0;
}

