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
	   int aOne=0,aZero=0,bOne=0,bZero=0;
	   string a,b;
	   cin>>a>>b;
	   f(n){
	       if(a[i]=='1') aOne++;
	       else aZero++;
	       if(b[i]=='1') bOne++;
	       else bZero++;
	   }
	   if((aOne==bOne)&&(aZero==bZero)) cout<<"YES"<<e;
	   else cout<<"NO"<<e;
	}
	return 0;
}

// we simply need to check that if the number of 1 and number of zeros are equal or not then only it is possible to arrange
// the given binary string A to B 