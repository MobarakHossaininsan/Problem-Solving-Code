#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ans,sum=0;
    cin >> a;
    int ar[a];
    for(int i=0;i<a;i++){
        cin >> ar[i];
        sum += ar[i];
    }
    sort(ar,ar+a);
    ans = ar[a-1]*a;
    cout << ans-sum << endl;
}

