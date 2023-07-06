#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3],b[3];
	    cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
	    sort(a,a+3);
	    sort(b,b+3);
	    int ansA=a[2]+a[1];
	    int ansB=b[2]+b[1];
	    if(ansA>ansB) cout<<"Alice"<<e;
	    else if(ansB>ansA) cout<<"Bob"<<e;
	    else cout<<"Tie"<<e;
	}
	return 0;
}

// i took the score in array and sorted to get max 2 numbers and checked which has higher sum of highest 2 numbers and print 
// accodingly