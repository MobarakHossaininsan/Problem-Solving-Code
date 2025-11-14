#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,ans;
        cin >> n;
        if(n%2==0){
            cout << (n-1)-2 << " 2" << " 1" << endl;
        }
        else{
            ans = (n-1)/2;
            if(ans%2==0){
                cout <<ans-1<<" "<<ans+1<<" 1"<< endl;
            }
            else{
                cout <<ans-2<<" "<<ans+2<<" 1"<< endl;
            }
        }
    }
}
