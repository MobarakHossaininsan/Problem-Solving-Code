#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,ans,ans1,result=0;
    vector<int>v;
    cin >> a;
    while(a--){
        cin >> n;
        v.push_back(n);
    }
    ans = v[0];
    ans1 = v[0];
    for(int i=1;i<v.size();i++){
        if(v[i] > ans){
            result++;
            ans = v[i];
        }
        else if(v[i] < ans1){
            result++;
            ans1 = v[i];
        }
    }
    cout << result << endl;
}
