// Bismillah.
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main() {
    faster;
    testcase
    {
        int n,k; cin >> n >> k;
       

        int l = 0, r = 2e9;
        int mid,ans = 0;

        while(l <= r)
        {
            mid = l + (r-l) / 2;
            if((mid - (mid/n)) >= k)
            {
               ans = mid,r = mid - 1;
            }else l = mid+1;
        }


        p ans << endl;
    }
    return 0;
}

