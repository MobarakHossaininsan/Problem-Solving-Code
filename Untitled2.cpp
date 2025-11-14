#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,v;
    cin >> s;
         int j=0;
    for(int i=0; i< s.size();i++){
            if( s[i] != '+'){
                v[j] = s[i];
            }
            j++;
    }
    sort(v.begin(),v.end());
    for( int i=0; i<v.size();i++){

    cout << v[i]<< "+";

    }





}

