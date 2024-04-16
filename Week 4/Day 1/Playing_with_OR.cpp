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
        ll n,k;  cin >> n >> k;
        ll arr[n];

        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll l = 0;
        ll cnt = 0;
        ll ans = 0;
        ll r = 0;

        while(r < n) {
            if (arr[r] & 1) ans++; 
            if (r - l + 1 == k) {
                if (ans > 0) cnt++; 
                if (arr[l] & 1) ans--;
                l++;
            }
            r++;
        }
        p  cnt << endl;
    }
    return 0;
}
