#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    string a,b,c,d,ex;
    a = "I hate ";
    b = "I love ";
    c = "that ";
    d = "it";
    cin >> x;
    for(int i=1; i<=x;i++)
    {
      if(i%2==0){
        ex += (c+b);
      }
      else {
        if(i==1){
        ex += a;
            }
        else{
             ex += (c+a);
        }
      }
    }
    cout << ex << d;
    cout << endl;
}

