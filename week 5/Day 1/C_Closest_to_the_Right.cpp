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
    int n,k; cin >> n >> k;

    vector<ll>v(n),v1(k);

    f { cin >> v[i];}

    for(int j = 0; j < k; j++)
    {
        cin >> v1[j];
        auto it = lower_bound(v.begin(),v.end(),v1[j]);
        p it - v.begin() + 1 << endl;
    }
    
    return 0;
}