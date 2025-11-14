#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int dngr=1;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        int l=i+1;
        for(int j=l; j<s.size(); j++)
        {
            if(s[i]== s[j])
            {
                dngr++;
              if(dngr >= 7 )
                break;
            }
            else
            {
                dngr=0;
                break;
            }
        }
        if(dngr >= 7){
            cout << "YES" << endl;
            break;
        }
        dngr=1;
    }
    if(dngr < 7){
            cout << "NO" << endl;
        }

}
