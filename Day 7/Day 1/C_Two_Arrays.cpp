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
        int n; cin >> n;
        vector<int>a(n),b(n);
        int r = 0;
        bool flag = false;

        f{cin >> a[i];} f{cin >> b[i];}

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] == b[i] || a[i] + 1 == b[i])
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }

        p (flag? "YES" : "NO") << endl;
    }
    return 0;
}

