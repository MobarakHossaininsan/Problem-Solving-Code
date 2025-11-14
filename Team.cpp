#include<bits/stdc++.h>
using namespace std;
int main()
{
    int P,V,T;
    int n;
    cin>>n;
    int ok=0;
    while(n--){
     cin >> P >> V >> T;
    if((P+V+T) >= 2) ok++;
    }
    cout << ok << endl;
}

