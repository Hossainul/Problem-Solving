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
    
    ll t; cin >> t;

    while(t--)
    {
        ll n; cin >> n;
        vector<ll>arr(n);

        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end(),greater<ll>());

        ll box = 0;
        ll r = 0;

        for(ll i = 0; i < n; i++)
        {
            if(r < arr[i])
            {   
                box ++;
                r = 0;
            }
            r ^= arr[i];
           
        }

        p box << endl;
    }
    return 0;
}