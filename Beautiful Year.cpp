#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int v;
    cin >> v;
    v +=1;
    while(1){
    s = to_string(v);
    set<int> u(s.begin(), s.end());
    if(s.size() == u.size())
    {
        cout << v << endl;
        break;
    }
    v++;
  }

}

