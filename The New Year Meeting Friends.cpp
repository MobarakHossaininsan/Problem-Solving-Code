#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ans;
    vector<int>v;
    b=3;
    while(b--){
        cin >>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ans = (v[1]-v[0])+(v[2]-v[1]);
    cout << ans << endl;
}

