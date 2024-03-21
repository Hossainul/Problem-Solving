#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    cin >> n;
    int arr[n];
    set<int> st;

    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    
    
    for(int i = 1; i<=n; i++)
    {
        if(st.find(i) == st.end())
        {   
            cout << i;
        }
    }
    return 0;
}