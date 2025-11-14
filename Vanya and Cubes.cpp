#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0,count=0,sum2=0;
     cin >> t;
     if(t==1){
        cout << t<< endl;
     }
     else{
    for(int i=1;i<t;i++){
                sum += i;
                sum2 += sum;
            if(sum2<=t){
               count++;
            }
            else{
                break;
            }
    }
     cout << count << endl;
}
}



