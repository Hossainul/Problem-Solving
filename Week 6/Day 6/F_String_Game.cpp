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
    string as,b; 
    cin >> as;
    cin >> b;
    int n = as.size(); int m = b.size();

    vector<int>a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](int mid)
    {
        vector<bool>bad(n+1);
        for(int i = 0; i < mid; i++)
        {
            bad[a[i]] = true;
        }

        int j = 0;
        bool found = false;
        
        for(int i = 0; i < n; i++)
        {
            if(as[i] == b[j] && !bad[i+1])
            {
             
               j++;
            }

            if(j == m)
            {
                found = true;
                break;
            }
        }

        return found;
    };

    int l = 0,r = n , ans = 0;
    while(l <= r)
    {
        int mid = l + (r-l) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }else r = mid - 1;
    }

    p ans << endl;
    return 0;
}

