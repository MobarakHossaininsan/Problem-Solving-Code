#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int n; cin >> n;
    map<int,vector<int>>mp;
    vector<pair<int,int>>v;
    for(int i=0,a;i<n;i++){
        cin >> a;
        mp[a].push_back(i);
    }
    for(auto u : mp){
        if(u.second.size()<2){
            v.push_back(make_pair(u.first,0));
        }
        else{
            int ans = u.second[1]-u.second[0];
            bool f = true;
            for(int i=2;i<u.second.size();i++){
                if(ans != (u.second[i]-u.second[i-1])){
                    f=false;
                    break;
                }
            }
            if(f) v.push_back(make_pair(u.first,ans));
        }
    }
    cout << v.size() << el;
    for(auto u : v){
        cout << u.first << ' ' << u.second << el;
    }
    return 0;
}
