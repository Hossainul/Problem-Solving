#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin >> A >> B;
    
    int res = 0;
    if(A>B)
    {
       res = A + A-1;
    }
    else if(A==B)
    {
        res = A + B;
    }
    else
    {
        res = B + B-1;
    }
    cout << res;
    return 0;
}