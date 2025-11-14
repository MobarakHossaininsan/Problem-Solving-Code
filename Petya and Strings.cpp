#include<bits/stdc++.h>
using namespace std;
int main(){
        string s,v;
        cin >> s;
        cin >> v;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        transform(v.begin(), v.end(), v.begin(), ::toupper);
        if(s == v) cout << "0" << endl;
        else if( s < v) cout << "-1" << endl;
        else cout << "1" << endl;

}
