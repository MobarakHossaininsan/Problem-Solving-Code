#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,count=0,b=1;
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    string sc = s1 + s2;
    sort(sc.begin(),sc.end());
    sort(s3.begin(),s3.end());
    for(int i=0; i<s3.size(); i++)
    {
       if(sc[i] != s3[i]){
        count++;
       }
    }
    if(count > 0 || s3.size() != sc.size()){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}



