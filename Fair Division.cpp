#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,n,sum=0,count=0,cot=0;
        cin >> a;
        int x=a;
       while(a--){
        cin >> n;
        sum += n;
        if(n%2==0)
            count++;
        else
            cot++;
       }
        if(sum%2!=0){
            cout << "NO" << endl;
        }
        else{
         if((sum/2)%2==0 || (sum/2)%2==1 && cot!=0){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
          }
        }
    }
}

