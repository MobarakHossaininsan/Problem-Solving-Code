#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,v="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a,num=0;
    cin >> a >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<a;j++){
            if(v[i]==s[j]){
                num++;
                break;
            }
        }
    }
    if(num==26) cout << "YES" << endl;
    else cout << "NO" << endl;
}

