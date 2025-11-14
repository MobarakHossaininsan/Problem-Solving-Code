#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    set<int>s;
    cin >> a;
    cin >> b;
    while(b--){
        cin >> d;
        s.insert(d);
    }
    cin >> c;
     while(c--){
        cin >> d;
        s.insert(d);
    }
    if(s.size() == a)
        cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

}
