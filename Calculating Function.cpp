#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,sum=0;
    cin >> a;

        if(a%2==0){
            sum = a/2;
        }
        else {
            sum = (a+1)/2*(-1);
        }
    cout << sum << endl;
}
