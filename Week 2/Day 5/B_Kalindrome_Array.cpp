#include<bits/stdc++.h>
using namespace std;


bool check(vector<int>v)
{
    int l = 0;
    int r = v.size()-1;
    
    if(l == r)
    {
        return true;
    }
    while (l<r)
    {
        if(v[l] != v[r]) return false;
        l++;
        r--;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];
       
        for(int i = 0; i<n; i++)
        {   
            cin >> arr[i];
            
        }
        
        int l = 0;
        int r = n-1;
        
        if(l == r)
        {
            cout << "YES" << endl;
            continue;
        }

        int cnt = 0;
        int a,b;

        while(l < r)
        {
            if(arr[l] == arr[r])
            {
                cnt++;
            }
            else
            {
                a = arr[l];
                b = arr[r];
                break;
            }
            l++;
            r--;
        }
        
        if(cnt == n) cout << "YES" << endl;
        else
        {
            vector<int>v1,v2;

            for(int i = 0; i < n; i++)
            {
            if(arr[i] == a) continue;
            v1.push_back(arr[i]);
            }

            for(int i = 0; i <n; i++)
            {
                if(arr[i] == b) continue;
                v2.push_back(arr[i]);
            }
            
            if(check(v1) || check(v2)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
    }
    return 0;
}