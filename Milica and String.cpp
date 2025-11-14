#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,p;
        cin>> n >> p;
        string s; cin >> s;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            cnt += 1*(s[i]=='B');
        }
        if(cnt == p){
            cout << 0 << '\n';
        }
        else{
            cout << 1 << '\n';
            if(cnt < p){
                cout << p-cnt << " B\n";
            }
            else if(cnt == n){
                cout << n << " A\n";
            }
            else{
                 int x = s.size()-1,c=0;
                 while(x){
                    c += 1*(s[x]=='B');
                    if(c == p){
                        cout << x << " A\n";
                        break;
                    }
                    x--;
                 }
            }
        }
    }
    return 0;
}
