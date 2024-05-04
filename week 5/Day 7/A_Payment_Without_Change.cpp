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
        int a,b,n,s;
        cin >> a >> b >> n >> s;

        if(s % n <= b && (1ll * a*n + b) >= s) p "YES" << endl;
        else p "NO" << endl;
    }
    return 0;
}