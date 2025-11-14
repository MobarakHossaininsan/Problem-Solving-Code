#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    char c[100];
    cin >> a >> b;
    for(int i=0; i<a.size();i++)
    {
        if(a[i] != b[i]){
            c[i] = '1';
        }
        else{
            c[i] = '0';
        }
    }
    for(int j=0; j<a.size();j++){
    cout << c[j];
    }
    cout << endl;
}
