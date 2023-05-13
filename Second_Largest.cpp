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
	    int a[3];
	    f(3) cin>>a[i];
	    sort(a,a+3);
	    cout<<a[1]<<e;
	}
	return 0;
}

// put into array sort them and print second element to get second largest