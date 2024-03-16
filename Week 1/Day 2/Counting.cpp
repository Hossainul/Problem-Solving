#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;
    
    int cnt  = 0;
    while (A <= B)
    {
        if(A <= B) cnt++;
        A++;
    }
    
    cout << cnt;
    return 0;
}
