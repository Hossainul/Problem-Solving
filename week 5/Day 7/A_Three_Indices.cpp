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
        int n; cin >> n;
        int arr[n];
        f { cin >> arr[i];}
        
        bool flag = false;
        for(int i = 1; i < n - 1; i++)
        {
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            {   
                p "YES" << endl;
                p (i - 1) + 1  << " " << i  + 1<< " " << i + 2 << endl;
                flag = true;
                break;
            }
        }
        
        if(!flag) p "NO" << endl;
    } 
    return 0;
}