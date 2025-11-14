#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin  >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==b){
            cout << 0 << "\n";
        }
        else if((a+b)<=c){
            cout << 1 << "\n";
        }
        else{
            float ans = (a+b)/2.0;
            int ans2 = min(a,b);
            float ans3 = ans-(float)ans2;
            cout << ceil(ans3/c) << "\n";
        }
    }
    return 0;
}

