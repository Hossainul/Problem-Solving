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

        int highest_power_of_2 = 1;
        while (highest_power_of_2 <= n) {
            highest_power_of_2 <<= 1;
        }
        highest_power_of_2 >>= 1;

        p highest_power_of_2 - 1 << endl; 
    }
    return 0;
}
