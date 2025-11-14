#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    while(a--){
        int x,y,ans,result,sum=0;
        cin >> x >> y;
     if(x==y){
        cout << sum << endl;
     }
     else if(x>y){
         ans = x-y;
        for(int i=10;i>=1;i--){
           result = ans/i;
           sum += result;
           ans = ans%i;
        }
        cout << sum << endl;
      }
      else {
         ans = y-x;
        for(int i=10;i>=1;i--){
           result = ans/i;
           sum += result;
           ans = ans%i;
        }
        cout << sum << endl;
      }

}
}

