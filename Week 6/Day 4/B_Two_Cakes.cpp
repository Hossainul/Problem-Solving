// Bismillah.
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main() {
    faster;
    int n,a,b; cin >> n >> a >> b;
    int ans = 0;
    
   
    if(b > a)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = 1; i < n; i++)
    { 
        
        if(b/i != 0 && ((a)/(abs(i-n))) != 0)
        {
            int tmp = min((b/i),(a/abs(i-n)));
            ans = max(ans,tmp);
        }
    }

    p ans << endl;
    return 0;
}

