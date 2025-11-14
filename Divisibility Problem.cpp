#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,result=0,ans;
    cin >> a;
    while(a--)
    {
        cin >> b >> c;
        if(b%c==0){
            cout << result << endl;
        }
        else if (b < c){
            result = c-b;
            cout << result << endl;
        }
        else{
            ans = b/c;
            ans++;
            result = (c*ans)-b;
            cout << result << endl;
        }
        result = 0;
    }

}


