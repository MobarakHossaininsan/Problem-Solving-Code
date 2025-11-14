#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    vector<int>v;
    cin >> a;
    while(a--){
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
     for( auto u : v) cout << u << " ";
     cout << endl;
}
