// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    Faster;
    ll l,r; cin >> l >> r;

    print "YES" << endl;
    for(ll i = l; i <= r; i+=2)
    {
        print i << " " << i + 1 << endl;
    }
    return 0;
}