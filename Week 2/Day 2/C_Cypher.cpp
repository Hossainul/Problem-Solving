#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n,b;
        cin >> n;
        
        int arr[n];
        string s;
        
        vector<int>v;
        int x = 0;

        for(int i = 0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        int i = 0;
        while(i < n)
        {
            cin >> b;
            cin >> s;
            
            for(int j = 0; j<b; j++)
            {
                if(s[j] == 'D')
                {
                    if(arr[i] == 9)
                    {
                        arr[i] = 0;
                    }
                    else arr[i] ++;
                }
                else
                {
                    if(arr[i] == 0)
                    {
                        arr[i] = 9;
                    }
                    else arr[i]--;
                }
            }
            i++;
        }

        for(int val : arr)
        {
            cout << val << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}