#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,sum=0,c=2,d=1,sum2=0;
        cin >> a;
        b = a/2;
        if(b%2!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
           sum = b*(b+1);
           for(int i=1;i<=b;i++){
                cout << c <<" ";
                c+=2;
           }
           for(int i=1;i<=b-1;i++){
                cout << d <<" ";
                sum2+=d;
                d+=2;

           }
           cout <<(sum - sum2)<<endl;
        }
    }
}
