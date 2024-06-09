
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
        int n;
        cin >> n;
        string s; 
        cin >> s;
        
        int ans = n;
        int cnt = 0;

        for(int i  = 0; i < n; i++)
        {
            if(i + 1 <= n)
            {
                if((s[i] == s[i+1]))
                {
                    cnt ++;
                    i++;
                }
            }
        }

        p ans - cnt << endl;
    }
    return 0;
}
