#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,k,p;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>k>>p;
	    int remain=0;
	    if(k==0) cout<<p<<e;
	    else{
	        if(x>=k) cout<<(k*10)+p<<e;
	        else{
	            if(n==k) cout<<((k-x)*5)+(x*10)+p+20<<e;
	            else cout<<((k-x)*5)+(x*10)+p<<e;
	        }
	    }
	}
	return 0;
}


// we print answer according to the question if k is 0 we directly print k as no bells are rang
// else if 10 mana bells are more then covered bells then we print k mana bells * 10 +p (initial mana)
// else if both covered bells and total are same we add extra 20 mana to answer else we remove those extra 20 mana