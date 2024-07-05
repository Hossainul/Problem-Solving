// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll lcm(ll a, ll b)
{
   return (a / __gcd(a,b)) * b;
}

int main() {
    Faster;
    ll n; cin >> n;
    
    ll ans;
    for(ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0 && lcm(i,n/i) == n) ans  = i;
    }

    print ans << " " << n / ans << endl;
    return 0;
}