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
        int n;
        cin >> n;
        int mat[n+5][n];

        for(int i = 1; i<= n; i++)
        {
            for(int j = 1; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }

        map<int , int> mp;
        map<int , int> m;

        for(int i = 1; i <=n; i++)
        {
            mp[mat[i][n-1]] = i;
            m[mat[i][n-1]] ++;
        }
        
        int idx = 0, val;
        for(auto u : m)
        {
            if(u.second == 1) idx = u.first;
            else val = u.first;
        }

       for(int i=1; i<n; i++)
       {
          cout<<mat[mp[idx]][i]<<" ";
       }
       cout<<val<<endl;
    }
    return 0;
}