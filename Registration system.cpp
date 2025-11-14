#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
    int t; cin >> t;
    while(t--){
     int n; cin >> n;
     vector<string>v;
     set<string>s;
     int x=0;
     for(int i=1;i<n;i++){
        string c; cin >> c;
        s.insert(c);
        if(s.size()!= x){
            cout << "OK\n";
            x = s.size();
        }
        else{

        }
     }
 }
    return 0;
}




