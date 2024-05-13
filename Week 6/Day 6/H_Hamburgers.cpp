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
    string s; cin  >> s;
    ll n = 0,m = 0, k = 0;
    
    for(char ch : s)
    {
        if(ch == 'B') n++;
        else if(ch == 'S') ++m;
        else ++k;
    }
        int sb,ss,sc; cin >> sb >> ss >> sc;
        int pb,ps,pc; cin >> pb >> ps >> pc;
        ll r; cin >> r;
        
        auto ok = [&](ll mid)
        {
            ll nb = max(0LL,mid*n - sb);
            ll ns = max(0LL,mid*m - ss);
            ll nc = max(0LL,mid*k - sc);

            return nb * pb + ns * ps + nc * pc <= r;
        };


        ll l = 1,h = 1e13 + 5,ans = 0;
        while(l <= h)
        {
            ll mid = l + (h-l) /2;
            if(ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }else h = mid - 1;
        }

        p ans << endl;
    
    return 0;
}

