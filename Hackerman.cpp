#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    a+=b;
	    bool ans=true;
	    int i=2;
	    while(i<a){
	        if(a%i==0){
	            ans=false;
	            break;
	        }
	        i++;
	    }
	    if(ans) cout<<"Alice"<<e;
	    else cout<<"Bob"<<e;
	}
	return 0;
}

// first we take the sum of the two given numbers as we need to according to our question
// then we put the prime factor program in it and check if the number is 
// not a prime then we break else we continue and then at last if the number
// is prime we print alice 