#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    string x,y;
    string arr[100000],arr2[100000];
    for(int i=0;i<5;i++)
    {
        cin >> x >> y;
        arr[i]=x;
        arr2[i]=y;
    }
        string ans[100000],a;
       for(int i=0;i<3;i++)
    {
        cin >> a;
        ans[i]=a;
    }
     int count = 0;
      for(int i=0;i<3;i++){
         for(int j=0;j<5;j++)
    {
       if(ans[i]==arr2[j]){
        cout << arr[j] << endl;
        count=1;
       }
    }
       if(count==0){
        cout << "eh" << endl;
       }
       count=0;

      }

}

