// Bismillah
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define print cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define Faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    Faster;
    int r,g,b; cin >> r >> g >> b;
    string s; cin >> s;

    if(s == "Red") cout << min(g,b) << endl;
    else if(s == "Blue") cout << min(r,g) << endl;
    else cout << min(r,b) << endl;
    return 0;
}