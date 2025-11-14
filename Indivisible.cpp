#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(a==1){
            cout <<"1\n";
        }
        else{
        int ans = (a*(a+1))/2;
        if(ans%a != 0){
           for(int i=1;i<=a;i+=2)
           {
               cout << i+1 << " ";
               cout << i << " ";
           }
           cout << endl;
        }
        else{
            cout << "-1\n";
        }
    }

  }
}
