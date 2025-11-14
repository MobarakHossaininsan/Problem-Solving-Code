#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum=0,count=0;
    cin >> a >> b;
    for(int i=1;i<=a;i++){
        sum=sum+5*i;
        if((sum+b)<=240){
            count++;
        }
    }
    cout << count << endl;
}
