#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    int z,i=1;
    int a[2000];
    cin >> z;
    while(z--){
        int y,p;
        cin >> y;
        for(int j=0;j<y;j++){
                cin >> p;
           a[j]= p;
        }
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Case " << i << ":" << max_sum;
    i++;
    }
}
