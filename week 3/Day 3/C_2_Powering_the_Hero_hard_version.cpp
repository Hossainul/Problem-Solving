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
        priority_queue<ll>pq;

        ll ans = 0;
        
        f
        {
            ll x; cin >> x;
           
          
                if(x == 0)
                {   
                    if(pq.empty())continue;
                    ans += pq.top();
                    pq.pop();
                }
                else pq.push(x);
            
        }

        p ans << endl;
        
    }
    return 0;
}