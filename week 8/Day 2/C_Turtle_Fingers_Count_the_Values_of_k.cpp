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
    ll a,b,l; cin >> a >> b >> l;
    set<int>st;
    for(int i = 1; l % i == 0; i*=a)
    {
        for(int j = 1; l % (i*j)== 0; j*= b)
        st.insert(l/(i*j));
    }

    p st.size() << endl;
    }
    return 0;
}

