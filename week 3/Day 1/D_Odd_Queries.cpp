#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        long long int n,q;
        cin >> n >> q;
        vector<int>arr(n+1,0);
        vector<int>pref(n+1,0);

        
        for(int i = 1; i<=n; i++)
        {
            cin >> arr[i];
            
        }
        

        for(int i = 1; i<=n; i++)
        {
            pref[i] = arr[i] + pref[i-1];
        }
        
       
        while(q--)
        {   
            long long int sum = pref[n];
            ll l,k,r;
            cin >> l >> r >> k;
           
            
            
            sum -= pref[r] - pref[l-1];
            sum += (abs(l-r) + 1)*k;
            
            if(sum % 2 != 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}