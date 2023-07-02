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
	    int k=2,n=100;
	    while(n--){
	        if((a%k) && (b%k) && (c%k)){
	            cout<<k<<e;
	            break;
	        }
	        k++;
	    }
	}
	return 0;
}

// the test cases given in the question are to confuse you , you just need to find a number which is not divisible by all the
// three numbers , we can do that by using the modulus operator as shown above