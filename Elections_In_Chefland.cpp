#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if(a<=50 && b<=50 && c<=50) cout<<"NOTA"<<e;
	    else if(a>50) cout<<"A"<<e;
	    else if(b>50) cout<<"B"<<e;
	    else cout<<"C"<<e;
	}
	return 0;
}

// since we are given that sum of 3 numbers is always 101 so we can say that if all 3 numbers are less that or 
//equal to 50 then no one will win else if even one has votes greater than 50 then there is no way any other
// 2 parties can win the election