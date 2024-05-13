
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k; cin >> n >> k;
    vector<int>a(n); for(int i = 0; i < n; i++){cin >> a[i];}

    auto ok = [&](int mid)
    {
       int cnt = 1;
       int d = a[0];

       for(int i = 1; i < n; i++)
       {
           if(a[i] - d >= mid)
           {
              cnt++;
              d = a[i];
           } else continue;
       }

       if(cnt >= k) return 1;
       else return 0;
    };

    int l = 0, r = 1e9, ans = 0;
    while (l <= r)
    {
        int mid = l + (r-l) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }else r = mid - 1;
    }
    cout << ans << endl;

	return 0;
}
