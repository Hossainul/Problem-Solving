#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        if (l == r) {
            bool found = false;
            for (int i = 2; i <= sqrt(l); ++i) {
                if (l % i == 0) {
                    int a = i;
                    int b = l - i;
                    if (a + b == l && __gcd(a, b) != 1) {
                        cout << a << " " << b << endl;
                        found = true;
                        break;
                    }
                }
            }
            if (!found) cout << -1 << endl;
        } else {
             bool ok = false;
        
        for(int i = l; i <= r; i++)
        {   
            if((i % 2 == 0) && (i <= r) && i > 2)
            {
                ok = true;
                cout  << i - 2 << " " << 2 << endl;
                break;
            }
            
        }
        
        if(!ok) cout <<  - 1 << endl;

        }
    }
    
    return 0;
}
