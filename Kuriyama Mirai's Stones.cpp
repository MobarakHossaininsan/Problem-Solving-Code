#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);

    int n; cin >> n;
    int a[n+1];
    ll v[n+1],sum=0;
    v[0] = 0; a[0] = 0;
    for(int i=1;i<=n;i++){
    	cin >> a[i];
    	sum += a[i];
    	v[i] = sum;
    }
    ll s[n+1]; s[0] = 0;
    sum = 0;
    sort(a,a+n+1);
    for(int i=1;i<=n;i++){
    	sum += a[i];
    	s[i] = sum;
    }
    int t; cin >> t;
    while(t--){
    	int a,l,r; cin >> a >> l >> r;
    	if(a == 1){
    		cout << (v[r]-v[l-1]) << '\n';
    	}
    	else{
    		cout << (s[r]-s[l-1]) << '\n';
    	}
    }
    return 0;
}
