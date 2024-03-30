#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        string ans;

        for(int i = 0; i<n; i++)
        {
            char ch = tolower(s[i]);
            if(i == 0) ans +=ch;
            else if(ch != ans.back()) ans += ch;
        }

        if(ans == "meow") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}