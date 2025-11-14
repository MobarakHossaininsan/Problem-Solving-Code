#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,count=0;
    cin >> x;
    string s;
    cin >> s;
    for( int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout << count << endl;
    }


