#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a;
    while(a--){
    vector<int>v;
    cin >> b;
    if(b>=1000){
        c=b%1000;
        c=b-c;
        v.push_back(c);
        b=b%1000;
    }
     if(b>=100){
        c=b%100;
        c=b-c;
        v.push_back(c);
        b=b%100;
    }
    if(b>=10){
        c=b%10;
        c=b-c;
        v.push_back(c);
        b=b%10;
    }
    if(b>=1 && b<10){
        v.push_back(b);
    }
    cout << v.size() << endl;
    for( auto u : v) cout << u << " ";
    cout << endl;
  }
}


