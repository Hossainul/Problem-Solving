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
    testcase
    {
        ll n,m; cin >> n >> m;
        string a,b; cin >> a >> b;
        
        ll same = 0;
        ll ans = 0;
        
        ll cnt = 0,pre = 0;
        string add;
        for(int i = 0; i < n; i++)
        {   
           cnt++;
           add += a[i];

           if(cnt == m)
           {
              cnt = 0;
              i = pre++;
              for(int i = 0; i < m; i++)
              {
                if(b[i] == add[i]) same++;
              }
              ans = max(ans,same);
              same = 0;
              add.clear();
           }

        }
        
        p m - ans << endl;
       
    }
    return 0;
}

