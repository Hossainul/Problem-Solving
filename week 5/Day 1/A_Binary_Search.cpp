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
    int n,k; cin >> n >> k;

    int arr[n],arr1[k];

    f
    {
        cin >> arr[i];
    }

    for(int j = 0; j < k; j++)
    {
        cin >> arr1[j];
    }
    
    for(int i = 0; i < k; i++)
    {
        int l = 0; int r = n-1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l+r) / 2;
          

            if(arr1[i] == arr[mid])
            {   
                flag = true;
                p "YES" << endl;  
                break;
            }
            else if(arr[mid] > arr1[i])
            {
                r = mid-1;
            }
            else l = mid + 1;

           
        }
        if(!flag) p "NO" << endl;
    }
    return 0;
}