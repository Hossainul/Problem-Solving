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
    int n,t; cin >> n >> t;
    int arr[n];
    f{cin >> arr[i];}

    auto ok = [&](ll m)
    {
        ll total = 0;
        for(int i = 0; i < n; i++){ 
            total += (m/arr[i]);
            if(total >= t) return true;
            }
            return false;
    };

    ll ans = 0;
    ll l = 0; ll r = 10e18,mid;

    while(l <= r)
    {
        mid = (r + l) / 2;
        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else 
        {
            l = mid + 1;
        }
    }

    p ans << endl;
    return 0;
}