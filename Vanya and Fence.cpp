#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int a,b,x,sum=0;
    cin >> a >> b;
    while(a--)
    {
        cin >> x;
        v.push_back(x);
    }
     for(int i=0;i<v.size();i++){
        if(v[i] <= b){
            sum += 1;
        }
        else{
            sum += 2;
        }
     }
     cout << sum << endl;

}


