#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    while(a--){
        int x,flag = 0,arr[100];
        cin >> x;
     for(int i=0;i<x;i++){
            cin >> arr[i];
     }
     sort(arr,arr+x);
     if(x==1){
        cout << "YES" << endl;
     }
     else{
        for(int i=0;i<x-1;i++){
            if(abs(arr[i]-arr[i+1]) <= 1){
                 flag = 1;
            }
            else{
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cout << "YES" << endl;
     }
}

}

