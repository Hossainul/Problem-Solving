#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,s;
    cin >> n >> s;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = 0;

    long long int sum,ans;
    sum = ans = 0;
    
    while (r<n)
    {
        sum += arr[r];
        if(sum <= s)
        {
           ans += r-l+1;
        }
        else
        {
           while(sum > s)
           {
              sum -= arr[l];
              l++;
           }

           if(sum <= s && l < n)
           {
              ans += r-l +1;
           }
        }
        r++;
    }
    
    cout << ans << endl;
    return 0;
}