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
    int n; cin >> n;
    vector<int>a(n);
    f{cin >> a[i];}

    ll ans = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] - a[i+1] > 0 )
        {
            ans += (a[i] - a[i+1]);
            a[i+1] += a[i] - a[i+1];
        }
    }
    
    //for(int val : a) cout << val << " ";
    cout << ans << endl;
    return 0;
}