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
        ll ans = 0;
        ll move = 0;
        int P = 0;
       

        ll n; cin >> n;
        for(ll i = 1; i <= n; i++)
        {
            int x; cin >> x;
            ans += abs(x);
            
            if(x < 0) P = 1;
            else if(x > 0)
            {
                move += P; P = 0;
            }
            
        }
        move += P;
        p ans << " " << move << endl;
        
    }
    return 0;
}