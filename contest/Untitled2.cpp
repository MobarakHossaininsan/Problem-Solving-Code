#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    short n;
    cin >> n;
    while(n--){
            long x,y;
            int count=0;
        cin >> x >> y;
       vector<int> v;
       int a;
       for(int i=2; i<=y;i++){
          if(y%i==0){
              for(int j=1;j<=i;j++){
                    if(i%j==0)
                        count++;
                        a = i;

            }
             if(count == 2){
             v.push_back(a);
                }
                count=0;
          }
       }
            int loss=0;
       for(int k=0; k < v.size(); k++){
            if(x%v[k]==0){
               loss++;
            }
            else{ break;}
       }
       if( v.size() == loss){

        cout << "YES" << endl;
       }
       else{
        cout << "NO" << endl;

       }

        }
    }

