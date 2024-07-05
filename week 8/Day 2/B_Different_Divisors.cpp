// Bismillah.
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int gcd(int a)
{
    for(int i = 2; i * i <= a; i++)
    {
        if(a % i == 0) return 0;
    }
    return 1;
}
int main() {
    faster;
    testcase
    {
        int d; cin >> d;
        int t1,t2;
        t1 = 1 + d;
        while(gcd(t1) == 0) t1++;
        t2 = t1 + d;
        while(gcd(t2) == 0) t2++;
        p t1 * t2 << endl;
    }
    return 0;
}

