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
        ll n,k,q;    cin >> n >> k >> q;
        
        ll ans = 0;
        ll re = 0;
        
        f
        {
            int x; cin >> x;

            if(x <= q) ans ++;
            else ans = 0;
            if(ans >=k) re += (ans-k+1);
        }
        p re << endl;
        
    }
    return 0;
}