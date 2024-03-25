#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,s;
    cin >> n >> s;

    int arr[n];
    int l = 0;
    int r = 0;
    

    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    ll sum = arr[0];
    int ans = INT_MAX;

    while(r < n)
    {   
        
        if(sum >= s && l < n)
        {  
           sum -= arr[l];
           ans = min(ans,r-l+1);
           l++;
        }
        else
        {  
           if(sum < s)
           {
              r++;
              sum += arr[r];
           }
        }
    }

    if(ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}