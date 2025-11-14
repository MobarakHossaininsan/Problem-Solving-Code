#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    string a;
    cin >> a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
            ans++;
        }
    }
    if(ans > 0)  cout << "YES" << endl;
    else  cout << "NO" << endl;
}

