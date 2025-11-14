#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t;
    cin >>t;
    while(t--){
    int sum =0,sum2=0;
    cin >> s;
    for(int i=0;i<3;i++)
    {
        int a = int(s[i]);
        sum += a;
    }
     for(int i=3;i<6;i++)
    {
        int b = int(s[i]);
        sum2 += b;
    }
    if(sum == sum2)
        cout << "YES\n";
    else
        cout << "NO\n";
}
}
