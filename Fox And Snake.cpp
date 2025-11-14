#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin >> a >> b;
    for(int i=1; i<=a; i++)
    {
        if(i%2 != 0)
        {
            for(int j=0; j<b; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else{
                c++;
            if(c%2!=0){
                for(int j=1; j<b; j++)
            {
                cout << ".";
            }
            cout << "#";
            cout << endl;
            }
            else{
            cout << "#";
            for(int j=1; j<b; j++)
            {
                cout << ".";
            }
            cout << endl;
            }
        }
    }
}





