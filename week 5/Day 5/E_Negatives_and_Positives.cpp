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
        ll n; cin >> n;
        ll sum = 0;
        int neg = 0;
        int arr[n]; f {
             cin >> arr[i]; 
             sum += abs(arr[i]); 
             if(arr[i] < 0)
             {arr[i] = - arr[i]; 
             neg++;}
            }

        sort(arr,arr+n);
        
        if(neg % 2 == 0) p sum << endl;
        else
        {
            p sum - 2 * arr[0] << endl;
        }
    }
    return 0;
}