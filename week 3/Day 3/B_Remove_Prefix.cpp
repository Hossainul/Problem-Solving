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
        ll n;
        cin >> n;

        ll arr[n];
        map<ll,ll>mp;

        f
        {
            cin >> arr[i];
            //mp[arr[i]]++;
        }
        
        bool flag = false;
        for(int i = n-1; i >=0; i--)
        {  
           mp[arr[i]]++;
           if(mp[arr[i]] >= 2)
           {
              p i + 1 << endl;
              flag = true;
              break;
           }
        }

        if(!flag) p 0 << endl;
    }
    return 0;
}