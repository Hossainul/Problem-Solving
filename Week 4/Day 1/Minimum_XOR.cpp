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
        ll n; cin >> n;
        ll Xor = 0;
        ll arr[n];

        f
        {
           cin >> arr[i];
           Xor ^= arr[i];
        }
        
        ll ans = Xor;

        f
        {
           ans = min(ans, (Xor ^ arr[i]));
        }

        p ans << endl;
    }
    return 0;
}