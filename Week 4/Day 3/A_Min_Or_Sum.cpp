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
        int n; cin >> n;
        ll ans = 0;
        f
        {
            int x; cin >> x;
            ans |= x;
        }

        p ans << endl;
    }
    return 0;
}