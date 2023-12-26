#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    string s;
	    cin>>s;
	    set<int> st;
	    int ans=n;
	    st.insert(ans);
	    f(n){
	        if(s[i]=='R') ans++;
	        else ans--;
	        st.insert(ans);
	    }
	    cout<<st.size()<<e;
	}
	return 0;
}

// we need unique values when robot moves from the given string so we keep adding postition to set and if it is unique
// it is shown else it continue. At last we print the size of set which gives us the number of unique values.