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
	    cout<<n*10<<e;
	}
	return 0;
}
// since the number of notebooks are per 100 pages and we receive 1000 per kg of pulp we divide 1000/100 =10 so we need to 
// multiply with n kg of pulp to get number of notebook