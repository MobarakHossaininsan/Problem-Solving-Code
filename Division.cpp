#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int s;
        cin >> s;
        if(s>=1900)
        {
            cout << "Division 1\n";
        }
        else if(s>=1600 && s<1900){
            cout << "Division 2\n";
        }
        else if(s>=1400 && s<1600){
            cout << "Division 3\n";
        }
        else if(s<1400){
            cout << "Division 4\n";
        }
    }
}

