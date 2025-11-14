#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >>b;
        if(a>b){
                b=b*2;
        if(b>=a)
            cout << b*b << endl;
            else
                cout << a*a << endl;
        }
        else if(a<b)
        {
            a=a*2;
            if(a>=b)
            cout << a*a << endl;
            else
                cout << b*b << endl;
        }
        else
        {
            cout << (a*2)*(a*2) << endl;
        }
    }
}
