// Bismillah.
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main() {
    faster;
    testcase
    {
        int n; cin >> n;
        vector<int>a(n); f{cin >> a[i];}

        pbds<int>pb;
        
        pb.insert(a[0]);
        ll ans = 0;
        for(int i = 1; i < n; i++)
        {
            ans+= pb.size() - pb.order_of_key(a[i]);
            pb.insert(a[i]);
        }

        cout << ans << endl;
    }
    return 0;
}

