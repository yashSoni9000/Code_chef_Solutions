#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,n,q;
// 	cin>>t;
	while(t--)
	{
	    int temp;
	    cin>>n>>q;
	    int a[n];
	    f(n) cin>>a[i];
	    sort(a,a+n);
	    f(q){
	        cin>>temp;
	        if(temp<a[0]|| temp>a[n-1]) cout<<"No"<<e;
	        else cout<<"Yes"<<e;
	    }
	}
	return 0;
}

// we can pick any 2 number so we take min and max elemnet from the given array and check for q time , if the given number lies
// between the min and max we print yes else print no