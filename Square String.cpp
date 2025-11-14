#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin >> t;
    while(t--){
            int flag=0;
        string s;
        cin >> s;
        int x=(s.size())/2;
        if(s.size()%2 != 0){
            cout << "NO\n";
        }
        else{
            for(int i=0;i<x;i++){
                if(s[i]==s[x+i]){
                    flag++;
                }
                else {
                cout << "NO\n";
                break;
             }
            }
            if(flag==x){
                cout << "YES\n";
            }
        }
    }
}

