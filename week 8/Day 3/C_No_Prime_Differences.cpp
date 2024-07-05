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
        int n,m; cin >> n >> m;
        int i2 = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i % 2 == 0) i2 = i / 2 + n / 2;
                else i2 = i / 2;

                p i2*m + j + 1 << " ";
            }
            cout << endl;
        }
        
        cout << endl;
        
    }
    return 0;
}

