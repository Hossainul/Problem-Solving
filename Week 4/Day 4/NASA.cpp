#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
const int Max = 1 << 15;
using namespace std;

void find_palindrome(vector<int> &allpalindrome) {
    for(int i = 0; i < Max; i++) { 
        string s = to_string(i);
        int l = 0, r = s.length() - 1; 
        bool flag = true;
        while(l < r) {
            if(s[l] != s[r]) {
                flag = false;
                break; 
            }
            r--;
            l++;
        }
        if(flag) {
            allpalindrome.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> allpalindrome;
    find_palindrome(allpalindrome);

   

    testcase {
       
        ll n; cin >> n;
        vector<ll> v(n), fre(Max, 0); 
        f {
            cin >> v[i];
            fre[v[i]]++;
        }

        ll pal = n;
       
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < allpalindrome.size(); j++) {
                int cur = (v[i] ^ allpalindrome[j]);
                pal += fre[cur];
            }
        }

        p (pal / 2) << endl;
    }
    return 0;
}
