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
	        f(n){
	            for(int j=0;j<n;j++) cout<<1<<" ";
	            cout<<e;
	        }
        cout<<e;
	}
	return 0;
}

// since all the elements of each row , column and main diagonal must be same after XOR operation so that is only
// possible when all the elements are same you can check for odd number and even number , we get 1 as XOR of
// all odd number and 0 for all even numbers therefore it always gives same value for XOR of odd and also same
// value for even number 