// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    Faster;
    int n;
    cin >> n;

    vector<int>ans;
    for(int i = 1; i <= n; i++)
    {
        if(i%2 == 0) ans.push_back(i);
    }
    

    for(int i = 1; i <= n; i++)
    {
        if(i%2 != 0) ans.push_back(i);
    }

    bool flag = 1;
    for(int i = 0; i < n-1; i++)
    {
        if(ans[i] - ans[i+1] == 1)flag = 0;
    }

    if(flag)
    {
        for(int val : ans) cout << val << " ";
    }
    else cout << "NO SOLUTION" << endl;
    return 0;
}