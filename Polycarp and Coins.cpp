#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
            if(a%3==0){
                cout << a/3 << " "<< a/3 << endl;
            }
            else if(a%3==1){
                cout << (a/3)+1 << " "<< a/3 << endl;
            }
            else if(a%3==2){
                cout << a/3 << " "<< (a/3)+1 << endl;
            }
    }
}
