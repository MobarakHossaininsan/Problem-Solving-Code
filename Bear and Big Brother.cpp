#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,bob,limak,count=1;
    cin >> k >> n;
    limak = k*3;
    bob = n*2;
     if(limak > bob)
     {
         cout << "1" << endl;
     }
     else{
    while(limak <= bob){
    limak = limak*3;
    bob = bob*2;
    count++;
    if(limak > bob) cout << count << endl;
    }
     }
}

