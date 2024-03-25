#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        set<int> st;
        for(int i = 0; i < n; i++)
        {   
            int x;
            cin >> x;
            st.insert(x);
        }

        cout << st.size()-(n-st.size()) % 2 << endl;
    }
    
    return 0;
}