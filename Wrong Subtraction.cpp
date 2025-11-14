#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,a;
    cin >> x >> y;
    for(int i=0;i<y;i++){
        a = x%10;
        if(a == 0){
            x = x/10;
        }
        else{
            x--;
        }
    }
    cout << x << endl;

}
