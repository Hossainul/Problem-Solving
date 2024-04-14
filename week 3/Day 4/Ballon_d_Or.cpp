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

        ll ans = 0;
       
        for(ll i = 0; i < n; i++)
        {
            int x; cin >> x;
        
            if(x == 2) ans ++;
        }
        
       
        
        if (ans % 8 == 0) 
            p "YES" << endl;
        else 
            p "NO" << endl;
    }
    return 0;
}