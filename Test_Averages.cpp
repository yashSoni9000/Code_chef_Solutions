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
	    double a[3];
	    f(3) cin>>a[i];
	    sort(a,a+3);
	    if((a[0]+a[1])/2>=35) cout<<"Pass"<<e;
	    else cout<<"Fail"<<e;
	}
	return 0;
}

// we get the 3 marks in array and sort them , if the first 2 have average larger than 35 then this also means that next 2 
// numbers will also be satisfied and we print yes else print no