// Bismillah.
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for (int i = 0; i < n; i++)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    faster;
    int n, k;
    cin >> n >> k;
    multiset<int> st;
    f
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    vector<int> b(k);
    for (int i = 0; i < k; i++)
        cin >> b[i];
    for (int i = 0; i < k; i++)
    {
        auto it = st.upper_bound(b[i]);
        if (it == st.begin())
            p - 1 << endl;
        else
        {
            it--;
            p *it << endl;
            st.erase(it);
        }
    }
    return 0;
}
