#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define mp vector<pair<ll,ll>>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    testcase
    {
        int n;
        cin >> n;
        

        ll ans = 0;
        mp va;mp vb;mp vc;

        f
        {
            int x; cin >> x;
            va.push_back({x,i});
        }

        f
        {
            int x; cin >> x;
            vb.push_back({x,i});
        }

        f
        {
            int x; cin >> x;
            vc.push_back({x,i});
        }

        sort(va.begin(),va.end(),greater<>());
        sort(vb.begin(),vb.end(),greater<>());
        sort(vc.begin(),vc.end(),greater<>());

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                for(int k = 0; k < 3; k++)
                {
                    if(va[i].second != vb[j].second && va[i].second
                    != vc[k].second && vb[j].second != vc[k].second)
                    {
                        ans = max((va[i].first + vb[j].first + vc[k].first),ans);
                    }
                }
            }
        }

        p ans << endl;
    }
    return 0;
}