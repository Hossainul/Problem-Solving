#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;

        int arr[26] = {0};

        for(int i = 0; i < n; i++)
        {
            arr[s[i] - 'a'] ++;
        }
        
        int d = -1;
        for(int i = 0; i < 26; i++)
        {
            d+= arr[i] % 2;
        }
        
        if(d <= m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}