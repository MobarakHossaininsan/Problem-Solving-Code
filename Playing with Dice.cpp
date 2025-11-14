#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base :: sync_with_stdio(0);
  cin.tie(0);

  int n,m; cin >> n >> m;
  int first=0,second=0,draw=0;
  for(int i=1;i<=6;i++){
     if(abs(n-i) < abs(m-i)){
        first++;
     }
     else if(abs(n-i)==abs(m-i)){
        draw++;
     }
     else{
        second++;
     }
  }
  cout <<first<<" "<<draw<<" "<<second<<'\n';
  return 0;
}




