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
	    int chef,morty,chefSum=0,mortySum=0,chefBoi=0,mortyBoi=0;
	    f(n){
	        cin>>chef>>morty;
	        while(chef){
	            int last=chef%10;
	            chefSum+=last;
	            chef/=10;
	        }
	        while(morty){
	            int last=morty%10;
	            mortySum+=last;
	            morty/=10;
	        }
	        if(chefSum>mortySum) chefBoi++;
	        else if(mortySum>chefSum) mortyBoi++;
	        else if(chefSum==chefSum){
	            chefBoi++;
	            mortyBoi++;
	        }
	        chefSum=0,mortySum=0;
	    }
	    if(chefBoi>mortyBoi) cout<<0<<" "<<chefBoi<<e;
	    else if(mortyBoi>chefBoi) cout<<1<<" "<<mortyBoi<<e;
	    else cout<<2<<" "<<chefBoi<<e;
	}
	return 0;
}

// for each chef and morty card numerb received we add the digits in each of their cards and check whoever card sum is greater
// they get the point and again make the sum of card 0 for taking new card. After all the rounds we check who has highest
// number of points and we print accodingly