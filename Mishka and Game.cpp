#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,m=0,c=0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a>b)
        {
            m++;
        }
        else if(a<b)
        {
            c++;
        }
    }
    if(m>c)
    {
        cout << "Mishka" << endl;
    }
    else if(m<c){
            cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
}
