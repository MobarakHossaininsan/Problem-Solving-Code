#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
const int N = 1e7;

vector<bool> prime(N+1,true);
vector<int> c_prime;

void sieve(){
  prime[0] = prime[1] = false;
	for(int i=2;i*i<=N;i++){
		if(prime[i]){
			for(int j=i*i;j<=N;j+=i){
				prime[j]=false;
			}
		}
	}
	for(int i=2;i<=N;i++){
      if(prime[i]) c_prime.push_back(i);
	}
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);

    sieve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt=0;
		// for(int i=0;c_prime[i]<=n;i++){
		// 	ll ans = 1LL*((c_prime[i]-1)*(c_prime[i]-1)+1);
		// 	if(ans <= n) cnt++;
		// }
		// cout << cnt << el;
		for(int i=0;i<=n;i++){
            cout << c_prime[i] << ' ';
		}
		cout << el;
	}

    return 0;
}
