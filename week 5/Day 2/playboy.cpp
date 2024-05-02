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
    f {cin >> arr[i];}

    int q; cin >> q;
    while (q--)
    {
        int x; cin >> x;
        int l = 0; int r = n-1;
        int les = 0; int gre = 0;
        while (l <= r)
        {
            int mid = (l+r) / 2;
            if(arr[mid] < x)
            {
                les = arr[mid];
                l = mid + 1;
            }
            else if(arr[mid] > x)
            {
                gre = arr[mid];
                r = mid - 1;
            }
            else if(arr[mid] == x)
            {   
                
                if(arr[mid + 1] > x)
                {
                    gre = arr[mid + 1];
                    //p "YEs" << endl;
                }
                r = mid - 1;
            }
        }
        if(les == 0) p "X" << " ";
        else p les << " ";
        if(gre == 0) p "X" << " ";
        else p gre << " ";
        p endl;

    }
    
    return 0;
}