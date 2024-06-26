// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    Faster;
    
    testcase
    {
        ll n; cin >> n;
        vector<ll>a(n);
        f{cin >> a[i];}

        map<ll,ll>cnt;

        for(int i = 0; i < n; i++)
        {   
            
        for(int j = 2; j * j <= a[i]; j++)
        {
           if(a[i] % j == 0)
           {
               while(a[i] % j == 0)
            {
                cnt[j]++;
                a[i] /= j;
            }
           }
        }

        if(a[i] > 1)
        {
            cnt[a[i]]++;
        }

        }
        
        
        bool ok = true;
        for(auto[x,y] : cnt)
        {
          if(y % n !=0) ok = false;
        }
        
        if(ok) print "YES" << endl;
        else print "NO" << endl;
    }
    return 0;
}