#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x,a,b;
    cin >> x;
    vector<pair<int,int>> s;
    while(x--)
    {
        cin >> a >> b;
        if(a%2==0 && b%2==0){
        s.push_back({a,b});
        }
    }
    sort(s.rbegin(),s.rend());
    int ans,num;
    ans = s[0].first*s[0].second;
    for(int i=1; i< s.size(); i++)
    {
        if(s[i].first <= s[0].first && s[i].second <= s[0].second)
        {
            continue;
        }
        else{
            if (s[i].first < s[0].first && s[i].second > s[0].second){
                num = abs(s[0].second-s[i].second);
                ans = ans + (num*s[i].first);
                s[0].second = s[i].second;
            }

        }

    }
    cout << ans << endl;


}


