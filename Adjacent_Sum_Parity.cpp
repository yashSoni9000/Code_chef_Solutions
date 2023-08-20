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
	    int ans=0,temp;
	    f(n){
	        cin>>temp;
	        ans^=temp;
	    }
	    if(ans==1) cout<<"NO"<<e;
	    else cout<<"YES"<<e;
	}
	return 0;
}

// there are many ways of doing it but the code which i wrote is most optimum, we need to check the number of 1 are even or odd
// we can simply xor all the given numbers and it will give us the answer at the end as in xor if a thing repeates 2 times
// it nullify else it carries on that is why at the end if there is 1 remaing in answer then 1 was odd number of times so we 
// we printed no else we print yes