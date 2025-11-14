#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans;
    cin >> n;
    if(n%2==0){
        ans = n/2;
        cout << ans<< endl;
        while(ans--){
            cout << "2 ";
        }
    }
    else if(n==2 || n==3){
             cout << "1\n";
        cout << n << endl;
    }
    else{
        ans = (n-1)/2;
        cout << ans << endl;
        for(int i=1;i<=ans-1;i++){
            cout <<"2 ";
        }
            cout <<"3\n";
    }

}
