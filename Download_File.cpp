#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int tim,mb,sum=0,freBe=k;
	    f(n){
	        cin>>tim>>mb;
	        if(freBe>=tim) freBe-=tim;
	        else{
	            tim-=freBe;
	            freBe=0;
	            tim*=mb;
	            sum+=tim;
	        }
	    }
	    cout<<sum<<e;
	}
	return 0;
}

// the first k minutes are free therefore we remove Ti minutes from k till k is not equal to 0 and after k==0 we keep
// adding Ti minutes with Di MBs to get our answer