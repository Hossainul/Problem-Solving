#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,s;
    cin >> n >> s;
    
    ll arr[n];
    int ans = 0;
    ll sum = 0;

    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = 0;

    while (r <= n-1)
    {   
        sum+= arr[r];
        if(sum <= s)
        {
            ans = max(ans,(r-l)+1);
            r++;
        }
        else
        {
            sum-= arr[l];
            l++;
            r++;
        }
        
        //cout << ans << endl;
    }
    
    cout << ans;
    return 0;
}