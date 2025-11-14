#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,sum=0,arr[100],result=0,ans=0;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> arr[i];
       sum += arr[i];
    }
    sum = (sum/2);
    sort(arr,arr+a);
    for(int i=a-1;i>=0;i--){
            ans += arr[i];
            result++;
        if(ans > sum){
            break;
        }
    }
    cout << result << endl;


}

