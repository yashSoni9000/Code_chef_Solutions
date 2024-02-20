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
	    int mini=INT_MAX,maxi=INT_MIN,temp,iMin,iMax;
	    f(n){
	        cin>>temp;
	        if(temp<mini){
	            mini=temp;
	            iMin=i;
	        }
	        if(temp>maxi){
	            maxi=temp;
	            iMax=i;
	        }
	        
	    }
	    if(iMin<iMax) cout<<mini<<" "<<maxi<<e;
	    else cout<<maxi<<" "<<mini<<e;
	}
	return 0;
}

// by question we simply need to print maximum and minimum number in the same order in which they are in the array
// i made it to this conclusion by observing that since there are 3 numbers and median will always be middle number
// therefore first and last number will only change if new max number or min number comes else remove mid element
// after sorting 3 elements and print who comes first and who comes second