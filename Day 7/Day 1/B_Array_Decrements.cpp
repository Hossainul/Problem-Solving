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
        vector<int>a(n),b(n);
        int r = 0;
        f{cin >> a[i];} f {cin >> b[i]; r = max(r,a[i]-b[i]);}
        bool fi = true;

        for(int i = 0; i < n; i++)
        {
            if((a[i] - r < b[i] && b[i] != 0) || b[i] > a[i])
            {
                fi = false;
                break;
            }
            
        }

        // //(cout (fi) ? "YES" : "NO" << endl);
        // if(fi) cout << "NO" << endl;
        // else p "YES" << endl;
        p (fi? "YES\n" : "NO\n");

    }
    return 0;
}