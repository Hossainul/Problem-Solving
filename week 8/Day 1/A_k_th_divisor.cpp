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
    ll n,k; cin >> n >> k;

    vector<ll>a;
    for(ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            a.push_back(i);
            if(n / i != i) a.push_back(n/i);
        } 
        
    }

    sort(a.begin(),a.end());
    
    if(a.size() >= k)
    {
        print a[k-1] << endl;
    }
    else print -1 << endl;
    return 0;
}