#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    if(s.size() == 4) cout << s;
    else
    {
        int x = 4 - s.size();
        for(int i = 0; i<x; i++)
        {
            cout << 0;
        }
        cout << s;
    }
    return 0;
}