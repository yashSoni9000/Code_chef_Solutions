#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    int temp;
	    string ans="";
	    cin>>n>>k;
	    f(n){
	        cin>>temp;
	        if(temp<=k){
	             ans+='1';
	             k-=temp;
	        }
	        else ans+='0';
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we took an empty string and for each input for the amount that specific person need, if it was less than the amount in the
// ATM i appended '1' to the answer string and decremented it from total amount denoting that the person has withdrawled the 
// amount else if person is not able to withdraw money then we simple append 0 to answer string 