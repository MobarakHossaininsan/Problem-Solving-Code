#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    vector<int>P,S,M;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]==1){
          P.push_back(i);
        }
        else if(a[i]==2){
            M.push_back(i);
        }
        else {
        S.push_back(i);
       }
    }
    int ans = min(P.size(),M.size());
    ans = min(ans,(int)S.size());
    cout << ans << "\n";
    for(int i=0;i<ans;i++){
       cout << P[i] << " " << M[i] << " " << S[i] << "\n";
    }
    return 0;
}
