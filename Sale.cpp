#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,sum=0;
    cin >> n >> m;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x<0){
         v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    int c=v.size();
    if(m>c){
    for(int i=0;i<c;i++){
        sum += v[i];
    }
    }
    else{
        for(int i=0;i<=m-1;i++){
        sum += v[i];
    }
    }
    cout << sum*-1 << endl;

}
