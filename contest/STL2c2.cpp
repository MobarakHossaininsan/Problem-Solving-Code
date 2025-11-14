#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,c;
    double b,ans=0;
    cin >> a >> b;
    vector<int>v;
    while(a--){
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(b==1){
            ans = ans + v[i]*b;
        }
        else {
            ans = ans + v[i]*b;
            b =b-1;
        }
    }
    cout << ans << endl;

}
