#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ans;
    vector<int>v;
    cin >> a >> b >> c;
     ans = a+b*c;
     v.push_back(ans);
     ans = a*(b+c);
     v.push_back(ans);
     ans = a*b*c;
     v.push_back(ans);
     ans = (a+b)*c;
     v.push_back(ans);
     ans = a+b+c;
     v.push_back(ans);
     sort(v.rbegin(),v.rend());
    cout << v[0] << endl;

}

