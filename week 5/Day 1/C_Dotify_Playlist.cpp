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
        int n,k,l;  cin >> n >> k >> l;
        
        vector<int>v;

        while(n--)
        {
            int m,li; cin >> m >> li;
            if(l == li) v.push_back(m);
        }
        
        if(v.empty())
        {
            p -1 << endl;
            continue;
        }
        sort(v.begin(),v.end(),greater<int>());
        ll ans = 0;

        for(int i = 0; i < k; i++)
        {
           ans += v[i];
        }
        
        p ans << endl;
    }
    return 0;
}