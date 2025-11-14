#include<bits/stdc++.h>
using namespace std;
bool vowel(char a){
   return (a=='a'||a=='o'||a=='y'||a=='e'||a=='u'||a=='i');
}
int main(){
    string s,ans;
    cin >> s;
    for( auto u : s){

    char c = tolower(u);
    if(!vowel(c)){
        ans += '.';
        ans += c;
    }

}
    cout << ans << endl;
}
