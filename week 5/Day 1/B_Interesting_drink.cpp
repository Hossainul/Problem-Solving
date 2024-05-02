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
    
    int n; cin >> n;
    int arr[n];

    f { cin >> arr[i];}
    
    sort(arr,arr+n);
    
    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;

        int l = 0; int r = n-1;
        ll ans = -1;

        while(l <= r)
        {
           ll mid = (l+r) / 2;
          
           if(x >= arr[mid])
           {  
             
              ans = mid;
              l = mid + 1;
           }
           else r =  mid - 1;
        }

        p ans + 1 << endl;
    }
    return 0;
}