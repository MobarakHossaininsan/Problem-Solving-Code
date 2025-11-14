#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,a,x,ans=0,c;
    cin >> n;
    while(n)
    {
        cin >> a;
        for(int i=0;i<a;i++)
        {
            cin >> x;
            s.insert(x);
            if(ans > x)
            {
               c++;
               ans = x;
            }
        }
        if(c == a){
        for(int i=s.size();i>0;i--){
           cout << s[i] << " ";
        }
        cout << endl;
      }
      else{
        for(int i=0;i<s.size();i++){
           cout << s[i] << " ";
        }
        cout << endl;
      }
    }
}
