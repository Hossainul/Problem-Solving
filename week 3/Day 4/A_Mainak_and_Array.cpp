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
            
            int ans = arr[n-1] - arr[0];

            for(int i = 1; i < n; i++) ans = max(ans,arr[i] - arr[0]);
            for(int i = 0; i < n-1; i++) ans = max(ans,arr[n-1] - arr[i]);
            for(int i = 1; i < n; i++) ans = max(ans,arr[i-1] - arr[i]);

            p ans << endl;
        }
        return 0;
    }