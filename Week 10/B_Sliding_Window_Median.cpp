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

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main() {
    faster;
    int n,k; cin >> n >> k;
    vector<int>a(n);
    f{cin >> a[i];}
    pbds<pair<int,int>>pb;
    
    int r = 0, l = 0;
    while(r >= l && r < n)
    {
        pb.insert({a[r],r});
        if((r-l+1) == k)
        {
            int pos = k / 2;
            if(k % 2 == 0) pos--;

            auto it = pb.find_by_order(pos);
            cout << it->first << " ";
            pb.erase({a[l],l});
            l++;
        }
        r++;
    }
    return 0;
}

