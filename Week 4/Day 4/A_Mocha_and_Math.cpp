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

        f
        {
            cin >> arr[i];
        }

        int ans = arr[0];

        for(int i = 1; i < n; i++)
        {
            ans &= arr[i];
        }

        p ans << endl;
    }
    return 0;
}