#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int x;
        cin>>x;
        
        int ans = 1;
        int f = 0;
        
        for(int b=30; b>=0; b--){
            if(((1<<b)&x) > 0){
                f++;
            }
            else if(f >= 2)
                ans *= 2;
        }
        
        cout<<ans<<"\n";
    }
}