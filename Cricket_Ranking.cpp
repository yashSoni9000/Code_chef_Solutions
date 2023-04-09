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
	    int r1,r2,w1,w2,c1,c2,a=0,b=0;
	    cin>>r1>>w1>>c1>>r2>>w2>>c2;;
	    if(r1>r2) a++;
	    else b++;
	    if(w1>w2) a++;
	    else b++;
	    if(c1>c2) a++;
	    else b++;
	    if(a>b) cout<<"A"<<e;
	    else cout<<"B"<<e;
	}
	return 0;
}

// I have used brute force approach to solve the problem
// eg
// 4 5 6
// 7 8 9
// checked that if 4>7 so we increase the count of b now b is in lead
// now 5>8 we again increase the count of b
// similarly we increase the count of b in third case
// and at the end we check which player has more count among the 2 players a and b
// and we print them accordingly