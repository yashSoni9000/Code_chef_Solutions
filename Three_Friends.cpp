#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    int a[3]={x,y,z};
	    sort(a,a+3);
	    if(a[0]+a[1]==a[2]) cout<<"yes"<<e;
	    else cout<<"no"<<e;
	}
	return 0;
}

// we simply need to check if sum of two numberes is equal to other number if yes the print yes else print no 
// to get to this conclusion you need to get some test cases of your own and figure out
// for ex
// 1 2 3
// we start from min number eg 10
// so b should be 9 
// and c should be 7 for -3 
// so it satisfy condition , if it was not summing up to larget number then its not possible to do such configuration