#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin >> c;
        v.push_back(c);
    }
    sort(v.rbegin(),v.rend());
    long long s[a+1];
      long long sum=0;
      s[0] = 0;
     for(int i=0;i<a;i++){
         sum += v[i];
         s[i+1] = sum;
    }
    while(b--){
     int x,y; cin >> x >> y;
    cout << s[x] - s[(x-y)] << '\n';
  }

  return 0;
}
