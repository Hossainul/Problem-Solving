#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin >> t;
	while(t--)
	{
	    int n; cin >> n;
	    stack<int>st;
        string s; cin >> s;
        int cn = 0;
	    
	    for(int i = 0; i < n; i++)
	    {
	       
	        if(!st.empty() && s[i] != st.top() )
	        {
	            st.pop();
                cn++;
	        }
	        else st.push(s[i]);
	    }

        if(cn % 2 == 0) cout << "Ramos" << endl;
        else cout << "Zlatan" << endl;
	}

}
