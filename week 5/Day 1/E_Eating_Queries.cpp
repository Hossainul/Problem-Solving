#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    testcase
    {
        ll n,k; cin >> n >> k;
        ll arr[n];

        for(ll i = 0; i < n; i++)
        {
           cin >> arr[i];
        }
        
        sort(arr,arr+n,greater<ll>());
        ll prefix[n];
        prefix[0] = arr[0];
        
        for(ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i-1] + arr[i];
        }
        
       

        while(k--)
        {
            ll a; cin >> a;
            if(a > prefix[n-1])
            {
                p -1 << endl;
                continue;
            }
            else
            {
                ll l = 0; ll r = n - 1;
                ll idx = -1;

                while (l <= r)
                {
                    ll mid = (l + r) / 2;
                    if(prefix[mid] >= a)
                    {
                        idx = mid;
                        r = mid - 1;
                    }
                    else
                    {
                        l = mid + 1;
                    }
                }
                
                p idx + 1 << endl;
            }
        }
    }
    return 0;
}