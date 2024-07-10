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
    int n,k; cin >> n >> k;
    vector<int>a(n);
    f{cin >> a[i];}

    map<ll,ll>mp;
    ll sum = 0,cnt = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum == k) cnt++;

        if(mp.count(sum - k))
        {
            cnt+= mp[sum-k];
        }

        mp[sum]++;
    }

    cout << cnt << endl;
    return 0;
}

