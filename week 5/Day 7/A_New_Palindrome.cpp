#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    testcase {
        string a; cin >> a;

        a = a.substr(0,(a.size())/2);
        set<char>st;
        for(int i = 0; i < a.size(); i++)
        {
            st.insert(a[i]);
        }

        p (st.size() == 1 ? "NO" : "YES") << endl;
    }
    return 0;
}
