#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1,n;
// 	cin>>t;
	while(t--)
	{
        cin>>n;
        n*=n;
        cout<<n/2<<e;
	}
	return 0;
}

// first we find the total number of total squares in given chess board
// we are given one side of chessboard i.e. number of squares on one side
// then we find total squares in chessboard by multiplying by itself 
// since the back and white square are equal we half from our total squares
// to get back squares