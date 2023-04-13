#define ll long long
#define f(end) for(int i=1;i<=end;i++)
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
	    int runs,ans=0,sRate,count=0;
	    f(n){
	        cin>>runs;
	        ans+=runs;
	        if(ans==i) count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}


// eg
// 4
// 1 2 0 3
// according to my code i took first run which is 1 in our case and added it to my answer which was initialized by 0
// and now i check it that if that answer is equal to i in our case 1==1 so we increase the count as the strike rate will
// we 100 at that time now 2 is taken as input and previous 1 is added to it now our total runs are 3 and number of current
// ball is 2 which dosent match so we leave it , again the count is 3 but no of balls have increased so 3==3 true we increment the count
// now the condititon not satisfy with 3 as total runs will be 6 which is more than number of balls so we print the count which is 2