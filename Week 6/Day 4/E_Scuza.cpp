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
        ll n,k; cin >> n >> k;
        vector<ll>a(n+1,0);

        for(ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<ll>pref(n+1,0);
        for(ll i = 1; i <= n; i++)
        {
            pref[i] = a[i] + pref[i-1];
        }

        vector<ll> ans(k);
        vector<pair<ll,int>> q(k);

        for(int i = 0; i < k; i++)
        {
            cin >> q[i].first;
            q[i].second = i;
        }

        sort(q.begin(),q.end());
        
       
        int ind = 0;
        for(int i = 0; i < k; i++)
        {
            while(true)
            {
                if(ind == n || a[ind + 1] > q[i].first) break;
                ind++;

            }

            ans[q[i].second] = pref[ind];
        }

        for(ll val : ans)
        {
            cout << val << " ";
        }
        
        p endl;
        
    }
    return 0;
}

