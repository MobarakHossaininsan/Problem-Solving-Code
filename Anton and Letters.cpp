#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<char>v;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]==' '||s[i]==','||s[i]=='{'||s[i]=='}'){
            continue;
        }
        else{
            v.insert(s[i]);
        }
    }
    cout << v.size() << endl;
}
