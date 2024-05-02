#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    testcase
    {
        ll n; cin >> n; int c; cin >> c;
        ll arr[n]; vector<int>v; f{cin >> arr[i]; v.push_back (i + 1 + arr[i]);}
        
        ll sum = 0;
        int i = 0;
        ll cnt = 0;
        sort(v.begin(),v.end());

        for(int i = 0; i < n; i++)
        {   
         
            sum += v[i];
            if(sum <= c) cnt++;
            else break;
        }

        p cnt << endl;
    }
    return 0;
}