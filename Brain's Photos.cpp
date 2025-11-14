#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,y,count=0;
    cin >> t>>y;
    int x=t*y;
    while(x--){
        char a;
        cin >>a;
        if(a=='C'||a=='M'||a=='Y'){
            count++;
        }
    }
    if(count!=0){
        cout << "#Color\n";
    }
    else{
            cout << "#Black&White\n";
        }
}
