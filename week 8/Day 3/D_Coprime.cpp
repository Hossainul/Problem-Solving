// Bismillah.
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    faster;
    testcase {
        ll n; cin >> n;
        vector<int> a(n);
        
        vector<int> pos(1001, -1); 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i + 1; 
        }
        
        int ans = -1;
        for(int i = 0; i < 1001; i++)
        {
            cout << i << " " << pos[i] << endl;
        }
        for (int i = 1; i <= 1000; i++) {
            if (pos[i] == -1) continue; 
            for (int j = 1; j <= 1000; j++) {
                if (pos[j] == -1) continue; 
                if (__gcd(i, j) == 1) {
                    cout << i << "->" << j << endl;
                    ans = max(ans, pos[i] + pos[j]);
                }
            }
        }

        p ans << endl;
    }
    return 0;
}
