#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,a,b;
	double ans;
// 	cin>>t;
	while(t--)
	{
	    char c;
	    cin>>a>>b>>c;
	    switch(c){
	        case '+':
	            ans=a+b;
	            break;
	        case '-':
	            ans=a-b;
	            break;
	        case '*':
	            ans=a*b;
	            break;
	        case '/':
	            ans=double(a)/double(b);
	            break;
	    }
	    cout<<fixed<<setprecision(6)<<ans<<e;
	}
	return 0;
}

// we simply need to perform the operations and we will get the result , i used fixed setprecision to get atleast 6 decimal places
// every time so that when division operation is performed i get the precise value