#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
    int n; cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int s=0,d=0,x=0,y=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[x]>=v[y]) {
                s += v[x];
                x++;
            }
            else{
                s += v[y];
                y--;
            }
        }
        else{
            if(v[x]>=v[y]) {
                d += v[x];
                x++;
            }
            else{
                d += v[y];
                y--;
            }
        }
      }
    cout << s << " " << d << '\n';
    return 0;
}



