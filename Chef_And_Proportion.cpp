#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,a,b,c,d;
// 	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    if((a*b==c*d)||(a*c==b*d)||(a*d==c*b)) cout<<"Possible"<<e;
	    else cout<<"Impossible"<<e;
	}
	return 0;
}
// since a:b::c:d we can say that a/b==c/d or a*c==b*d. Since we can rearrange the given numbers there are total 3 possiblity 
// mentioned we will have all the given numbers in proportions else they will never be in proportion