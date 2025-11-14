#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,sum=0;
    cin >> num;
    while(num--){
            cin >> a;
        sum = sum + a;
    }
    if(sum==0) cout << "EASY" << endl;
    else cout << "HARD" << endl;

}

