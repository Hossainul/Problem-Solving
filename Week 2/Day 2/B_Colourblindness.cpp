#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        char arr[2][n];
        
       
        int cnt = 0;

        for(int i = 0; i<2; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cin >> arr[i][j];
            }
        }
        

        for(int i = 0; i<1; i++)
        {   
           
            for(int j = 0; j<n; j++)
            {   
                if(arr[i][j] == arr[i+1][j]) cnt++;
                else
                {
                    if(arr[i][j] == 'B')
                    {
                        arr[i][j] = 'G';
                    }
                    else if(arr[i][j] == 'G')
                    {
                        arr[i][j] = 'B';
                    }

                    if(arr[i][j] == arr[i+1][j]) cnt++;
                }
            }
            
        }
        
        if(cnt == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}