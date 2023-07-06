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
	    int temp=0,lead,person=1,temp1,temp2,player1=0,player2=0;
	    for(int i=0;i<n;i++){
	        cin>>temp1>>temp2;
	        player1+=temp1;
	        player2+=temp2;
	        lead=abs(player1-player2);
	        
	        if(lead>temp){
	            temp=lead;
	            if(player1>player2) person=1;
	            else person=2;
	        }
	    }
	    cout<<person<<" "<<temp<<e;
	}
	return 0;
}

// we need cumulative score so we keep adding the scores of player 1 and player 2 at each stage and check the difference
// and according to the difference we will assign the highest difference and the person who scored it