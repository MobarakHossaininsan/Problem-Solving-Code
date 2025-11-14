#include <bits\stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, y;
    cin >> n >> x >> y;
    int time = x * 60 + y;  ///  1415
    int Min = 10000;
    for (int i = 0; i < n; i++)
    {
      cin >> x >> y;
      int ans = x * 60 + y;   /// 1215, 630
      if (ans < time)
        ans += 1440;  /// 630+1440=2070
      Min = min(Min, ans - time); /// 2070-1415=655
    }

    cout << Min / 60 << " " << Min % 60 << endl;
  }
}
