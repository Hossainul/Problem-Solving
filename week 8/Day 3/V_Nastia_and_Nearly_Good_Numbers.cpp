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
        ll a,b; cin >> a >> b;

        if(b == 1) cout << "NO" << endl;
        else 
        {
            cout << "YES" << endl;
            cout << a*b << " " << a*(b+1) << " " << a*b + a*(b+1) << endl;
        }
        
    }
    return 0;
}

