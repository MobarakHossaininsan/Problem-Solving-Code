#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    int result = 0;
    cin >> num;
    while(num != 0)
    {
        if(num%10==4|| num%10==7)
        {
            result++;
        }
        num /= 10;
    }
    if(result == 4 || result == 7)
        cout << "YES" << endl;
    else cout << "NO" << endl;



}
