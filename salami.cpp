#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0,k=0; ///4 5 6 6 4 3 6 4       3 4 6 3 4 7 4 6 8 6 6
    cin >> t;
    int arr[t];
    set<int>s;
    set<int>s2;
    for(int i=0; i<t; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        for(int j=0; j<t; j++)
        {
            if(*it==arr[j])
            {
                count++;
            }
        }
        if(count>=2)
        {
            k++;
            s2.insert(count);
        }
        count=0;
    }
    if(s2.size()==k){
        cout << "False\n";
    }
    else{
        cout << "True\n";
    }
}
