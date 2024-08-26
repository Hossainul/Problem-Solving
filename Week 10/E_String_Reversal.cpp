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
    int n; cin >> n;
    string s; cin >> s;
    string r = s;
    reverse(r.begin(),r.end());

    map<char,vector<int>>pos_S,pos_R;
    for(int i = 0; i < n; i++)
    {
        pos_S[s[i]].push_back(i);
        pos_R[r[i]].push_back(i);
    }

    vector<int>per(n);
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        for(int i = 0; i < pos_S[ch].size(); i++)
        {
            per[pos_R[ch][i]] = pos_S[ch][i];
            //cout << pos_R[ch][i] << "->" << pos_S[ch][i] << endl;
        }
    }

    // for(int val : per)
    // {
    //     cout << val << " ";
    // }

    ll ans = 0;
    pbds<int>pb;
    for(int i = n - 1; i >= 0; i--)
    {
        ans += pb.order_of_key(per[i]);
        pb.insert(per[i]);
    }

    cout << ans << endl;
    return 0;
}

