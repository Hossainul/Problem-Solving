#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout << 
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    testcase
    {
        int a,b,c;  cin >> a >> b >> c;
        if(abs(a-1) < abs(b-c) + abs(c-1)) p 1 << endl;
        else if(abs(a-1) > abs(b-c) + abs(c-1)) p 2 << endl;
        else p 3 << endl;
    }
    return 0;
}