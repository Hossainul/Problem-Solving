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
    int n,m; cin >> n >> m;
    pbds<int>pb;
    for(int i = 1; i <=n; i++)
    {
        int x; cin >> x;
        pb.insert(x);
    }

    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        int y = pb.order_of_key(x+1);
        cout << y << " ";
    }
    return 0;
}

