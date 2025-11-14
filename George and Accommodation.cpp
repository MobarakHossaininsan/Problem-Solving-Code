#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,b,count=0;
    cin >> num;
    while(num--){
            cin >> a >> b;
       if(a <= (b-2))
       {
           count++;
       }
    }
     cout << count << endl;


}


