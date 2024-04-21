#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int x;
        cin>>x;
        
        for(int b=30; b>=0; b--){
            if(((1<<b)&x) > 0){
                cout<<x - (1<<b)<<" "<<(1<<b)<<"\n";
                break;
            }
        }
    }
}
