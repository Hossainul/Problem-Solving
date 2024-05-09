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
        ll n,k; cin >> n >> k;
        vector<ll>a(k);

        for(int i = 0; i < k; i++){cin >> a[i];}
        ll ans = 0,cat = 0;
        sort(a.begin(),a.end(),greater<ll>());

        for(int i = 0; i < k; i++)
        {
           if(a[i] > cat)
           {  
             // p a[i] << "->" << cat << endl;
              ans++;
              cat += n - a[i];
           }
        }

        p ans << endl;
    }
    return 0;
}