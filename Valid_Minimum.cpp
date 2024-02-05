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
	    if(((a==b)&&(c>=a))||((b==c)&&(a>=c))||((c==a)&&(b>=c))) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

//  it is only possible to get the 3 numbers if the given min numbers have 2 same numbers and the third number should be greater
// then the 2 same numbers. I have seen it with observation you can try with any 3 given numbers say 
// 6 4 9 and you will always need to satisfy the above condition