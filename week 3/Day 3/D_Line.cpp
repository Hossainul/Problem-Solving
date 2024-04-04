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
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<ll> Remaining;
        vector<ll>ans(n+1);
        ll Total = 0;
        int mc = 0;
        f
        {
            int L = i;
            int R = n-i-1;

            if(s[i] == 'L')
            {
                if(R > L)
                {
                    mc ++;
                    Remaining.push_back(R-L);
                    Total += R;
                }
                else Total += L;
            }
            else if(s[i] == 'R')
            {
                if(L > R)
                {
                    mc++;
                    Remaining.push_back(L-R);
                    Total += L;
                }
                else Total += R;
            }
        }
            for(int i = mc; i <= n; i++)
            {
                ans[i] = Total;
            }

            sort(Remaining.begin(),Remaining.end(),greater<ll>());

            for(int i = mc-1; i>=1; i--)
            {
                Total -= Remaining.back();
                Remaining.pop_back();
                ans[i] = Total;
            }

            for(int i = 1; i <= n; i++)
            {
                p ans[i] << " ";
            }

            p endl;
        }

    return 0;
}