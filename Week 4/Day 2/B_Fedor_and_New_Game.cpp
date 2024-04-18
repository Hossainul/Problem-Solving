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
    
    int n,m,k; cin >> n >> m >> k;
    vector<int>arr(m+1);

    for(int i = 0; i < m + 1; i++)
    {
       cin >> arr[i];
    }

    vector<vector<int>> binary;

    for(int i  = 0; i < m + 1; i++)
    {
        vector<int>v;
        for(int k  = 0; k < n; k ++)
        {
            if((arr[i] >> k) & 1) v.push_back(1);
            else v.push_back(0);
        }

        binary.push_back(v);
    }

    vector<int> fedor = binary[m];

    int ans = 0;

    for(int i  = 0; i < m ; i++)
    {
        vector<int>v = binary[i];
        int cnt = 0;
        for(int k = 0; k < n; k++)
        {
            if(fedor[k] != v[k]) cnt ++;
        }
        
        if(cnt <= k) ans ++;
    }

    p ans << endl;
    return 0;
}