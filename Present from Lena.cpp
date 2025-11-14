#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
      int n;
      cin >> n;
      int x = n*2+1;
      int a=1,b=0,c=n,f=n-1;
      for(int i=0;i<=n;i++){
        for(int j=0;j<c;j++){
            cout << "  ";
        }
        int d=0;
       for(int j=0;j<=i;j++){
            cout << j;
            if(i!=0) cout << " ";
            d=j;
        }
        for(int j=0;j<i;j++){
                d--;
            cout << d;
            if(j != i-1) cout << " ";
        }
        cout << '\n';
        c--;
      }
        int y=1;
      for(int i=f;i>=0;i--){
        for(int j=0;j<y;j++){
            cout << "  ";
        }
        int d=0;
       for(int j=0;j<=i;j++){
            cout << j;
            if(i!=0) cout << " ";
            d=j;
        }
        for(int j=0;j<i;j++){
                d--;
            cout << d;
            if(j != i-1) cout << " ";
        }
        cout << '\n';
       y++;
      }
    return 0;
}


