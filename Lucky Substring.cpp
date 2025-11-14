#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
const int N = 1e5+12;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);

    string s; cin >> s;
    int cnt4=0,cnt7=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4') cnt4++;
        else if(s[i]=='7') cnt7++;
    }
    if(cnt4==0 && cnt7==0) cout << -1 << el;
    else if(cnt4 >= cnt7) cout << 4 << el;
    else cout << 7 << el;
    return 0;
}
