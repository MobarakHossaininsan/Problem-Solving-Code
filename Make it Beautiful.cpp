#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ar[100],sum=0,x,y=0,z=0;
    cin >> a;
    while(a--){
        cin >> b;
    for(int i=0;i<a;i++){
        cin >> c;
        ar[i] = c;
    }
    if(ar[0]==ar[1]){
        for(int i=2;i<a;i++){
        if(ar[i] == ar[i+1]){
            z=1;
        }
      }
      if(z==1) cout << "NO" << endl;
    }
    else{
    for(int i=0;i<a;i++){
        sum += ar[i];
        if(sum == ar[i+1]){
            x=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=x;
            y=1;
        }
    }
    if(y==1){
    cout << "YES" << endl;
     for(int i=0;i<a;i++){
        cout << ar[i] << " ";
    }
   }
  }
 }
}


