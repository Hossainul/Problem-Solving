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
    return (a/__gcd(a,b)) * b;
}
int main() {
    Faster;
    ll n,a,b,R,B; cin >> n >> a >> b >> R >> B;
    ll ans = 0;
    
    ans += (n/a) * R;
    ans += (n/b) * B;

    ll both = (n / lcm(a,b));
    ans -= both * (R+B);
    ans += both*(max(R,B));
    print ans << endl;
    return 0;
}