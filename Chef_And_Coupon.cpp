#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,d,c,a1,a2,a3,b1,b2,b3;
	cin>>t;
	while(t--)
	{
	    cin>>d>>c>>a1>>a2>>a3>>b1>>b2>>b3;
	    int day1=a1+a2+a3 ,day2=b1+b2+b3,ans1,ans2;
	    bool one=false,two=false;
	    ans2=day1+day2+d+d;
	    ans1=ans2;
	    if(day1>=150) ans1-=d;
	    if(day2>=150) ans1-=d;
	    ans1+=c;
	    if(ans1<ans2) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we add delivery chages for both the day first and we consider 2 senario that when we only add both day delivery charges
// and second one is after taking the coupon and compare them and then print accordingly