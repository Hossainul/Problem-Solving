#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n;
    cin >> n;

    long long int arr[n];
    long long int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    if(sum % 2 == 0) cout << sum;
    else
    {

    long long int mx = 0;
    long long int tmp = 0;

    for(int i = 0; i<n; i++)
    {
         
        if(arr[i] % 2 != 0)
        {   
            tmp = sum - arr[i];
            if(tmp % 2 == 0)
            {
                mx = max(tmp,mx);
                //cout << tmp << endl;
            }
        }
        // if(arr[i] % 2 == 0)
        // {
        //     mx += arr[i];
        // }
        // else
        // {
        //     tmp += arr[i];
        //     if(tmp % 2 == 0 && mx % 2 == 0)
        //     {
        //         mx += tmp;
        //         tmp = 0;
        //     }
        // }
        
    }
    cout << mx;
    }
    
    return 0;
}