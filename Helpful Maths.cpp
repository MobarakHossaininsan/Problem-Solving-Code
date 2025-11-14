#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,j;
    vector<string>v;
    cin >> s;
    for(int i=0;i<s.size();i++){
            if(s[i]!='+'){
               j = s[i];
               v.push_back(j);
            }
        }
        sort(v.begin(),v.end());
        cout << v[0];
     for( int i=1; i< v.size();i++){
        cout << "+" << v[i];
     }
     cout << endl;
    }


