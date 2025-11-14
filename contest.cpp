#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
vector<int>p;
 void sieve(){
 bool ans = true;
 int x = 0;
    for(int i=2;i<=9733;i++) {
        ans = true;
        for(int j=2;j*j<=i;j++) {
           if(i%j==0){
              ans = false;
              break;
           }
        }
        if(ans) {
            p.push_back(i);
        }
    }
}
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    sieve();
    int n,q; cin >> n >> q;
    int ans,o=1;
    vector<int>v,s,c;
    for(int i=0;i<n;i++){
        cin >> ans;
        v.push_back(ans);
    }
    for(int k=0;k<q;k++){
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]%p[k]==0){
            s.push_back(v[i]);
            v[i] = -1;
        }
    }
    if(o==1){
       reverse(v.begin(),v.end());
       reverse(s.begin(),s.end());
       o--;
    }
    // for(int i=0;i<s.size();i++){
    //     c.push_back(s[i]);
    // }
    // s.clear();
}

    if(*max_element(v.begin(),v.end()) > 0){
        for(int i=v.size()-1;i>=0;i++){
            if(v[i] != -1) s.push_back(v[i]);
        }
    }
    for(int i=0;i<s.size();i++){
       cout << s[i] << '\n';
    }
    return 0;
}
