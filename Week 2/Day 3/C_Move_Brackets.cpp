#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int ans = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == '(') ans++;
            else
            {
                if(s[i] == ')' && ans > 0) ans--;
            }
        }

        cout << ans << "\n";
    }
    return 0;

    }