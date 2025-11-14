#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        string s2 = "YES";
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        if(s == s2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}




