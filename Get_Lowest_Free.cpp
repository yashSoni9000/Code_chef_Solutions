#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3];
	    f(3) cin>>a[i];
	    sort(a,a+3);
	    cout<<a[2]+a[1]<<e;
	}
	return 0;
}

//we take all 3 in array and then sort them and print last 2 elements