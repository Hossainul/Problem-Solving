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
    
    int g = 1;
    while(true)
    {
        int n,q; cin >> n >> q;
        if(n == 0 && q == 0) break;
        int arr[n];
        f
        {
            cin >> arr[i];
        }

        sort(arr,arr+n);
        
        
        
        p "CASE# " << g << ":" << endl;
        while (q--)
        {
            int x; cin >> x;
            bool flag = false;
            int l = 0; int r = n-1;

            while(l <= r)
            {
                int mid = (l+r)/2;
                

                if(arr[mid] == x)
                {
                   
                    p x << " " << "found at" << " " << mid + 1 << endl;
                    flag = true;
                    break;
                }
                else if(arr[mid] > x) r = mid - 1;
                else l = mid + 1;
            }
 
            if(!flag) p x << " " << "not found" << endl;
            
        }
        
        g++;
    }
    return 0;
}