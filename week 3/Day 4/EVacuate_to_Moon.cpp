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
        int cars,outlets,hours;  cin >> cars >> outlets >> hours;
        int out[outlets];
        int car[cars];
        
        for(int i = 0; i < cars; i++)
        {
            cin >> car[i];
        }

        for(int i = 0; i < outlets; i++)
        {
            cin >> out[i];
        }
        
        ll ans = 0;
        
        sort(car,car+cars, greater<int>());
        sort(out,out+outlets, greater<int>());
        
        for(int i = 0; i < min(cars,outlets); i++)
        {
            ans += min(car[i],out[i]*hours);
        }
        
        p ans << endl;
    }
    return 0;
}