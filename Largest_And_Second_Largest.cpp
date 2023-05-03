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
	    int a[n];
	    f(n) cin>>a[i];
	    sort(a,a+n);
	    int max=a[n-1],smax;
	    for(int i=n-2;i>=0;i--){
	        if(a[i]!=max){
	            smax=a[i];
	            break;
	        }
	    }
	    cout<<max+smax<<e;
	}
	return 0;
}

// we need to get distinct largest 2 elements so we first sort the array and then make a loop to check if the element is not 
//equal to the last element then we will get the second largest element. We then add them and print them.