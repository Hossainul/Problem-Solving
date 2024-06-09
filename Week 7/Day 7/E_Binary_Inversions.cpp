// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll cal(vector<int>&a, ll n)
{
    ll zeros = 0, ans  = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] == 0) zeros++;
        else ans += zeros;
    }
    return ans;
}

int main() {
    Faster;
    testcase
    {
        ll n; cin >> n;
        vector<int>a(n);
        f{cin >> a[i];}

        ll ans = cal(a,n);

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            {
                a[i] = 1;
                ans = max(ans,cal(a,n));
            
                a[i] = 0;
                break;
            }
        }
        

        for(int i = n - 1; i >= 0; i--)
        {
            if(a[i] == 1)
            {
                a[i] = 0;
                ans = max(ans,cal(a,n));
            
            a[i] = 1;
            break;
            }
        }

        print ans << endl;
    }
    return 0;
}