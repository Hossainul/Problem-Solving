#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);

        int j;
        int mx = 0;
        
        int ans = 0;

        for(int i = 0; i<n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        for(int i = 0; i<n;)
        {
           j = i;

           while (v[i] == v[j] && i < n)
           {
               i++;
           }
           
           mx = max(mx,i-j);
        }

        while(mx < n)
        {
            if(2*mx > n)
            {
                ans++;
                ans = ans + (n-mx);
                mx += (n-mx);
            }
            else
            {
                ans++;
                ans = ans + mx;
                mx = 2*mx;
            }
        }

        cout << ans << "\n";
    }
    
    return 0;
}