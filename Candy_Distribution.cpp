#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(n%m) cout<<"NO"<<e;
	    else{
	        n/=m;
	        if(n%2) cout<<"NO"<<e;
	        else cout<<"YES"<<e;
	    }
	}
	return 0;
}

// we first need to check that if it is possible to give each person equal amount of candy , to check it we can see that if 
// n is divisible by m then we can say that each will get equal amount of candy , in that condition we check again that if
// each of person has even candy if yes the we print yes else print no