#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,p=0,q=0,a,n;
    string s;
	cin >> t;
    while(t--)
	{
	    n=0;
    	cin >> a >> s;
    	for(int i=0; i<s.size();i++)
    	{
    		if(s[i]=='U'){
                p++;
    		}
    		else if(s[i]=='R'){
                q++;
    		}
            else if(s[i]=='D'){
                p--;
    		}
    		else if(s[i]=='L'){
                q--;
    		}
    if(p==1 && q==1) {
        cout << "YES" << endl;
        n=1;
        break;
      }
  }
    if(n==0) {
        cout << "NO" << endl;
      }
    p=0;
    q=0;
 }
}

