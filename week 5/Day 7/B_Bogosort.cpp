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
        f { cin >> arr[i];} sort(arr,arr+n,greater<int>());
        
        // vector<int>v;

        // for(int i = 0; i < n-1; i++)
        // {
        //     for(int j = 0; j < n-1; j++)
        //     {  
               
        //         if((i - arr[i]) == (j  - arr[j]) && i  < j )
        //         {
        //             swap(arr[i],arr[j]);
        //             p arr[i] << arr[j] << endl;
        //         }
                
        //     }
           
        // }

        f{cout << arr[i] << " ";}
        p endl;
    }
    return 0;
}