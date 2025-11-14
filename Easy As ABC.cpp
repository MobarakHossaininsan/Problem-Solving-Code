#include<bits/stdc++.h>
using namespace std;
#define ll long long

int isPrime[1000100];
 void func(){
 	for(int i = 2; i <= 1000000; i++) {
 		isPrime[i] = 1;
 	}
 	cout << "ok";
 	for(int i = 2; i <= 1000000; i++) {
 		for(int j = i*i; j <= 1000000; j += i) {
			isPrime[j] = 0;
		}
	}
}
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);

    func();
	int N; cin >> N;
	int num;
	for(int i = 0; i < N; i++) {
	    cin >> num;
		if(isPrime[num] == 1) {
			cout << num << " is a prime number.\n";
		}
		else {
			cout << num << " is not a prime number.\n";
		}
	}
    return 0;
}

