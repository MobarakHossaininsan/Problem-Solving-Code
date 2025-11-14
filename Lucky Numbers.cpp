#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,r;
        cin >> n >> r;
        int maax=0,ans=n;
        for(int i=n;i<=r;i++){
            string num = to_string(i);
            sort(num.begin(),num.end());
            int m = num[num.size()-1]-num[0];
            if(m>maax){
                maax=m;
                ans=i;
            }
            if(maax==9){
                break;
            }
        }
        cout << ans << endl;
    }
}
