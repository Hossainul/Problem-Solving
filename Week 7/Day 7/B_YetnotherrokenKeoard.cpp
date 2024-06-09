// Bismillah
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    Faster;
    testcase {
        string x; cin >> x;
        int n = x.length();
        string ans;
        stack<char> s;
        
        for(int i = 0; i < n; i++) {
            if(x[i] == 'B') {
                if(!s.empty() && isupper(s.top())) {
                    s.pop();
                }
            } else if(x[i] == 'b') {
                if(!s.empty() && islower(s.top())) {
                    s.pop();
                }
            } else {
                s.push(x[i]);
            }
        }

        // Collect remaining characters from stack into the result string
        while(!s.empty()) {
            ans += s.top();
            s.pop();
        }

        // Since stack reverses the order, we need to reverse the string to get correct order
        reverse(ans.begin(), ans.end());

        print ans << endl;
    }
    return 0;
}
