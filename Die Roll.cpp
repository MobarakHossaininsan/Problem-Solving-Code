#include<bits/stdc++.h>
using namespace std;
int main()
{

        int a,b;
        cin >> a >> b;
        int x = max(a,b);
        int ans = (6-(x-1));
         if(ans%6==0){
            cout << ans/6 <<"/" << 6/6 << endl;
        }
        else if(ans%2==0){
            cout << ans/2 <<"/" << 6/2 << endl;
        }
        else if(ans%3==0){
            cout << ans/3 <<"/" << 6/3 << endl;
        }
        else{
            cout << ans <<"/" << 6 << endl;
        }


}


