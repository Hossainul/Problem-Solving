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
        int n; cin >> n;
        int arr[n+5];
        
        map<int,int>mp;
        f
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr,arr+n);
        
        int ans = 0;
        f
        {
            int val = arr[i];
            if(mp[val] != 0)
            {   
                ans++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
                
            }
        }

        p ans << endl;
    }
    return 0;
}