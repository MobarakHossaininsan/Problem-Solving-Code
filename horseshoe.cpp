#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b=4;
    set<int>v;
    while(b--){
        cin >> a;
        v.insert(a);
    }
     cout << (4-v.size()) << endl;

}

