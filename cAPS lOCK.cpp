#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1;
    char b;
    string s;
    cin >> s;
    for(int i=1;i<s.size();i++){
        if(islower(s[i])){
            a=0;
        }
    }
    if(a==1){
    for(int i=0;i<s.size();i++){
        if(islower(s[i]))
            b = toupper(s[i]);
        else
            b = tolower(s[i]);
    cout << b;
    }
     }
     else{
        cout << s << endl;
      }
}
