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
        
        //getchar();
        string s;
        cin >> s;
        
       
        if(n != 5)
        {
            cout << "NO" << endl;
            
        }
        else
        {   
           sort(s.begin(),s.end());
           
           cout<<(s=="Timru"?"YES\n":"NO\n");
        }
    }
    return 0;
}