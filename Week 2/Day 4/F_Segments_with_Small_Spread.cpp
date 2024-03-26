#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,s;
    cin >> n >> s;
    
    ll arr[n];
    multiset<ll>ms;
    
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int l = 0;
    int r = 0;
    ll ans = 0;

    while (r < n)
    {   
        ms.insert(arr[r]);
        ll small = *ms.begin();
        ll big = *ms.rbegin();

        if(big - small <= s)
        {   
            ans += r-l+1;
            cout << "firs sec->" << ans << endl;
        }
        else
        {
            while(l<n)
            {   small = *ms.begin(),big = *ms.rbegin();
                if(big - small <= s) break;
                auto it = ms.find(arr[l]);
                ms.erase(it);
                l++;
            }

            small = *ms.begin(),big = *ms.rbegin();
            if(big - small <= s)
            {
                ans += r-l+1;
                cout << "second sec->" << ans << endl;
            }
        }
        r++;
        
    }
    cout << ans << "\n";
    return 0;
}