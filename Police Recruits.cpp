#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a=0,b=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x == -1){
        if(a>0)
          a--;
          else
            b++;
        }
        else{
           a += x;
        }
   }
    cout<<b<<endl;
}

