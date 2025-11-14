#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
      int a,b; cin >> a >> b;
      string s; cin >> s;
      int arr[26] = {0};
      for(int i=0;i<a;i++){
        int c = s[i];
        arr[c-97]++;
      }
      int count = 0;
     for(int i=0;i<26;i++){
       if(arr[i]%2==1){
        count++;
       }
      }
      if(count <= b+1){
        cout << "YES\n";
      }
      else{
        cout << "NO\n";
      }
    }
    return 0;
}


