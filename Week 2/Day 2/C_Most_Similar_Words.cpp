#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int a,b;
        cin >> a >> b;

        string s[a];
        for(int i = 0; i<a; i++)
        {
            cin >> s[i];
        }
        
        int ans = INT_MAX;
        for(int i = 0; i < a; i++)
        {
            for(int j = i + 1; j < a; j++)
            {
                int x = 0;
                for(int k = 0; k<b; k++)
                {
                    x += abs(s[i][k] - s[j][k]);
                }
                ans = min(x,ans);
            }
        }

        cout << ans << endl;
    }
    return 0;
}