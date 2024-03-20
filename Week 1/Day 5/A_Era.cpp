#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--)
    {
    int n;
    cin >> n;

    int arr[n];
    int ans = INT_MIN;

    for(int i = 1; i<=n; i++)
    {
        int x;
        cin >> x;
        ans = max(ans,x-i);
    }

    cout << ans << endl;
    }
    

    return 0;
}