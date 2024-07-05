// Bismillah.
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define p cout <<
#define f for(int i = 0; i<n; i++)
#define testcase int t; cin >> t; while(t--)
#define faster ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// void findPrime(ll a, ll b)
// {   
//     bool ok = true;
//     for(ll i = 2; i * i <= b; i++)
//     {
//         if(b % i == 0)
//         {
//             if(a % i != 0)
//             {
//                 ok = false;
//                 break;
//             }
//             while(b % i == 0) 
//             {
//                 b/= i;
//             }
//         }
//     }
    
//     if(b > 1)
//     {
//         if(a % b != 0) ok = false;
//     }

//     if(ok) p "Yes" << endl;
//     else p "No" << endl;
    
// }

int main() {
    faster;
    testcase
    {
        ll a,b; cin >> a >> b;
        while(true)
        {
            int gc = __gcd(a,b);
            if(gc == 1)break;
            b/= gc;
        }

        if(b!= 1) p "No" << endl;
        else p "Yes" << endl;
    }
    return 0;
}

