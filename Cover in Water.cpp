#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t; cin >> t;
    while(t--){
      int n; string v;
      cin >> n >> v;
      int p=0,count=0,s=0,flag=0;
      int a = v.size()-1;
      while(p <= a){
         if(v[p]=='.'){
            count++;
            if(count>=3){
                cout << 2 << '\n';
                flag=1;
                break;
            }
        }
        else{
            s += count;
            count=0;
        }
        p++;
      }
      s += count;
      if(flag==0) cout << s << '\n';
    }
    return 0;
}

