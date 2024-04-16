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
        int arr[n];
        vector<int>v;
        int x = 0;
        int ans = 0;

        f
        {
            cin >> arr[i];
            x ^= arr[i];
        }

        f
        {
            v.push_back(arr[i]^x);
        }

        for(int val : v)
        {
            ans ^= val;
        }

        if(ans == 0) p x << endl;
        else p -1 << endl;
    }
    return 0;
}