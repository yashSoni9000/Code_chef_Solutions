#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    int unit=x%10;
	    if(unit>=5) x+=(10-unit);
	    else x-=unit;
	    cout<<100-x<<e;
	}
	return 0;
}


// i took the last digit and then checked that if its greater than 5 then i add 10-unit to the x else i subtract unit from x