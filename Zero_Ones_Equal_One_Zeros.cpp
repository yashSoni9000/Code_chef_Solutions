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
	        int first=n/2;
	        string firstHalf="";
	    if(!(n%2)){
	        for(int i=0;i<first-1;i++){
	            firstHalf+='0';
	        }
	        firstHalf+="11";
	        f(first-1) firstHalf+='0';
	    }
	    else{
	        f(first) firstHalf+='0';
	        firstHalf+='1';
	        f(first) firstHalf+='0';
	    }
	        cout<<firstHalf<<e;
	}
	return 0;
}

// i first half-1 i appended 0 then if num n is even then i added 2 '1' and the for rest of the bits i appended '0' at the last
//if num n is odd then only one is append in middle and rest are '0's