#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt = 0;
    long long int A, B;
    cin >> A >> B;
    
    while (A<=B)
    {
        A*= 2;
        cnt++;
    }
    
    cout << cnt;
    return 0;
}