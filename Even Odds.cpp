#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,ans;
    cin >> a >> b;

    if(a%2==0)  ans = a/2;
    else  ans = (a+1)/2;
    if(b <= ans){

        cout << (b*2-1) << endl;
      }
      else{
      cout << (b-(a+1)/2)*2 << endl;
      }
    }




