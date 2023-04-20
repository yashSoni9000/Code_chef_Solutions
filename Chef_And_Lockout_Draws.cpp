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
	    if((a+b==c) ||(b+c==a) ||(c+a==b) ) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// the question want us to check if there is a number whose sum is equal to third number 
// as only then it is possible to make a draw else either of them will be winning 
// eg 9 5 4
// there can be draw between them if one solves first question with 9 points and other solves 2 and 3
// question with 5 points and 4 points respectively so then the score will be equal