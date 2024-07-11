#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int>mp;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        
        int first = 0;
        for(int i = 0; i <= n; i++)
        {
            if(mp[i] == 0) 
            {
                first = i;
                break;
            }
        }

        int id = 0;


        for(int i = 0; i <=n; i++)
        {
            if(mp[i] == 1)
            {
                id = i;
                break;
            }

        }
        
        int f1 = 0;
        for(int i = id + 1; i <= n; i++)
        {
            if(mp[i] <= 1)
            {
                f1 = i;
                break;
            }
        }

        //cout << f1 << "->" << mex << endl;
        cout << min(f1,first) << endl;
    }
    
    return 0;
}
