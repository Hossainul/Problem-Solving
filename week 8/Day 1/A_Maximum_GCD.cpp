// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    Faster;
    testcase
    {
        ll n; cin >> n; 
        int ans = 1;

        for(int i = n; i >= 1; i--)
        {
            if(i % 2 == 0)
            {
                ans = i / 2;
                break;
            }
        }

        print ans << endl;
    }
    return 0;
}