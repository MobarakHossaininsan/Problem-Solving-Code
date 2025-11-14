#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,arr[100];
    cin >> n;
    while(n--)
    {
        cin >> a;
        for(int i=0;i<a;i++){
            cin >> arr[i];
        }
        for(int i=0;i<a;i++){
            if(i==0 && arr[i]!=arr[i+1] && arr[i]!=arr[i+2]){
               cout << (i+1) << endl;
               break;
            }
            if(i==0 && arr[i]!=arr[i+1] && arr[i]==arr[i+2]){
                continue;
            }
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                cout << (i+1) << endl;
                break;
            }
            if(i == a-1){
               cout << (i+1) << endl;
               break;
            }
        }
    }
}
