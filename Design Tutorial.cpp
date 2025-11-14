#include<bits/stdc++.h>
using namespace std;
int func(int n);
int main(){
    int x;
    cin >> x;
    for(int i=4;i<x;i++){
        if(func(i)!= 0){
            if(func(x-i)!= 0){
                cout << i << " " << x-i << endl;
                break;
            }
        }
    }

}
int func(int n)
{
    int count = 0;
    for(int i=2;i<n;i++)
    if(n%i==0){
        count++;
        break;
    }
    return count;
}

