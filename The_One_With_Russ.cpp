#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>k;
	    int a[n],b[n],temp=x;
	    f(n) cin>>a[i];
	    f(n) cin>>b[i];
	    f(n){
	        if(abs(a[i]-b[i])<=k){
	            if(temp>0){
	                temp--;
	            }else break;
	        }
	    }
	    if(temp>0) cout<<"NO"<<e;
	    else cout<<"YES"<<e;
	}
	return 0;
}

// for the n loop we check if difference of i th element of array is less than k then we decrease the number of characterstics x
// we need to match at least , if all matches we break the loop and since the number x is equal to 0 so we can say that
// it satisfies characterstics print yes else we print no