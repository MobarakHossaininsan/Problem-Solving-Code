#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1001],a=1;
     for(int i=1;i<=1666;i++){
         if(i%3!=0){
            if(i%10!=3){
                arr[a]=i;
                a++;
            }
        }
    }
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << arr[n] << endl;
    }
}



