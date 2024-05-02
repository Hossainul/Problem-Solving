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
    int n; cin >> n;
    int arr[n]; f { cin >> arr[i];}

    int prefix[n];
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int q; cin >> q;
    while(q--)
    {
        int a; cin >> a;
        int it = lower_bound(prefix,prefix+n,a) - prefix;
        p it  + 1 << endl;
    }
    return 0;
}