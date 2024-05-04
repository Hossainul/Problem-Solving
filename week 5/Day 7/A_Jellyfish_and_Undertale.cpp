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
        int a,b,n;
        cin >> a >> b >> n;

        ll ans = b;
        
        f
        {   
            
            int x; cin >> x;
            ans += min(x,a-1);
        }
        
        p ans << endl;
    }
    return 0;
}