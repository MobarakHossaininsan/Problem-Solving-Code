#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b,count=0;
        cin >> n;
        while(n--)
        {
            cin >> a >> b;
            if(a>b){
                count++;
            }
        }

    cout << count << endl;
    }

}
