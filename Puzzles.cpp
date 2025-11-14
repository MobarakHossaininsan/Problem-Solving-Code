#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b,arr[1000],c;
    cin >> a >> b;
    for(int i=0;i<b;i++){
        cin >> arr[i];
    }
    sort(arr,arr+b);
    int least = arr[a-1]-arr[0];
    for(int i=1;i<=b-a;i++){
        if(arr[i+a-1]-arr[i] < least){
            least = arr[i+a-1]-arr[i];
        }
    }
    cout << least << endl;


}
