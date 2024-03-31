#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
using namespace std;

string s[100100];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    testcase
    {
        int n;
        cin >> n;
        
        
        unordered_map<string,int> mp;
        f
        {
           cin >> s[i];
           mp[s[i]] = 1;
        }

        f
        {   
            int l  = 0;
            for(int k = 0; k < s[i].size(); k++)
            {
                string b,c;
                b = s[i].substr(0,k);
                c = s[i].substr(k);
                if(mp[b] && mp[c]) l = 1;
            }

            cout << l;
        }

        p endl;
    }
    return 0;
}