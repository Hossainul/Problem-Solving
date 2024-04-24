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

       
        vector<ll> ans;

        

        int msb = __lg(n-1);
        ans.push_back(n-1);

        for(ll i = n-2; i>=0; i--)
        {
            if((__lg(i)) == msb)
            {
                ans.push_back(i);
            }
            else break;
        }
        
        ll si = ans.size();
       // for(ll val : ans) p val << " ";
        
        for(ll i = 0; i < ans[si-1]; i++)
        {
            ans.push_back(i);
        }
        
        for(ll val : ans) p val << " ";
        p endl;
    }
    return 0;
}