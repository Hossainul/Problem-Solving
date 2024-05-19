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
        vector<int>a(n),b(n+1,0);
        unordered_map<int,int>mp;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] <= n) mp[a[i]] ++;
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = i; j <= n; j+=i)
            {
                b[j] += mp[i];
            }
        }

        cout << *max_element(b.begin(),b.end()) << endl;
    }   
    return 0;
}

