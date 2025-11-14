#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int count=0,count2=0;
        char arr[8][8];
        for(int i=0;i<8;i++){
           for(int j=0;j<8;j++){
            cin >> arr[i][j];
           }
        }
        bool done = false;
        for(int i=0;i<8;i++){
            bool flag = true;
           for(int j=0;j<8;j++){
            if(arr[i][j]!='R'){
                flag = false;
                break;
              }
           }
           if(flag){
               done = true;
               cout << "R" << endl;
               break;
           }
        }
        if(!done){
            for(int i=0;i<8;i++){
            bool flag = true;
           for(int j=0;j<8;j++){
            if(arr[j][i]!='B'){
                flag = false;
                break;
              }
           }
           if(flag){
               done = true;
               cout << "B" << endl;
               break;
           }
          }
        }
    }
}
