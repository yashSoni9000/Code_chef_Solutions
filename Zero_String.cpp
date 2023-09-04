#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int one=0,zero=0;
	    string s;
	    cin>>s;
	    f(n){
	        if(s[i]=='1') one++;
	        else zero++;
	    }
	    if(one>zero) cout<<zero+1<<e;
	    else cout<<one<<e;
	}
	return 0;
}

// we need to observe that when we have to flip and when not to 
// we can see that if the numberof one are greater than number of zeros then we need to flip so that there are
// more number of zeros and we can use the second operation to get all string to 0
// if zeros are already greater then one then we do not need to flip as this will increase the number of one and 
// we want all zeros possible so we simply perform second operation and remove those 1, so we can say that we
// need to remove 1 the count of one times to get out answer