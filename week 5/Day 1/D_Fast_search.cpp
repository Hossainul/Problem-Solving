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

    vector<int>arr(n); f { cin >> arr[i];}
    sort(arr.begin(),arr.end());

    int t; cin >> t;

    while(t--)
    {
        int a,b; cin >> a >> b;
        auto it1 = lower_bound(arr.begin(),arr.end(),a);
        auto it2 = upper_bound(arr.begin(),arr.end(),b);
        
        p it2 - it1 << " ";
    }
    return 0;
}