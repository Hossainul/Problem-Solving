// Bismillah.
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    faster;
    testcase
    {
        int n; cin >> n;
        multiset<int>a;
        
        f{int x; cin >> x; a.insert(x);}

        auto ok = [&](ll )
        {
            multiset<int> b = a;
            for(int i = 1; i <= k; i++)
            {
                if(b.empty()) return false;
                ll re = k-i+1;
                auto it = b.upper_bound(re);
                if(it == b.begin()) return false;
                it--;
                b.erase(it);

                if(!b.empty())
                {
                    it = b.begin();
                    ll v = (*it);
                    v+= (re);
                    b.insert(v);
                    b.erase(it);
                }
            }

            return true;
        };

        int l = 0, r = n,ans = 0;
        while(l <= r)
        {
            int mid = l + (r-l) / 2;
            if(ok(mid))
            {
               ans = mid;
               l = mid + 1;
            }
            else r = mid - 1;
        }

        p ans << endl;
    }
    return 0;
}
