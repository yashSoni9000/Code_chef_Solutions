#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t=1,jacketCost,sockCost,money;
// 	cin>>t;
	while(t--)
	{
	    cin>>jacketCost>>sockCost>>money;
	    ll remainingMoney;
	    remainingMoney=money-jacketCost;
	    remainingMoney/=sockCost;
    	if(remainingMoney%2==0) cout<<"Lucky Chef"<<e;
        else cout<<"Unlucky Chef"<<e;
	}
	return 0;
}

// we remove the cost of jacket from the money chef has and then we check if chef can but in pair then the remainder when divided
// by 2 must be 0 so we applied the condition, in any other condition chef is unlucky