#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    string s,temp="";
	    cin>>s;
	    set<string> st;
	    f(s.length()-1){
	        temp+=s[i];
	        temp+=s[i+1];
	        st.insert(temp);
	        temp="";
	    }
	    cout<<st.size()<<e;
	}
	return 0;
}

// we take the pair of 2 and keep pushing it to set and since set only take unique values we print the set size to get
// the distinct codes