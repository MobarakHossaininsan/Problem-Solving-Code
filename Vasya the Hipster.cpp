#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b;
    if(a>b){
        cout << b << " ";
        c = a-b;
        c = c/2;
        cout << c << endl;
    }
    else if(a<b){
        cout << a << " ";
        c = b-a;
        c = c/2;
        cout << c << endl;
    }
    else {
        cout << a << " " << "0" << endl;
    }
}

