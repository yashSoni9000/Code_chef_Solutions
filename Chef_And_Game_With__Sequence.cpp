#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,temp;
	cin>>t;
	while(t--)
	{
	    int oddCount=0;
	    cin>>n;
	    f(n){
            cin>>temp;
            if(temp%2) oddCount++;
	    }
	    if(n==1) cout<<1<<e;
	    else{
	        
	        if(oddCount%2) cout<<2<<e;
	        else cout<<1<<e;
	    }
	}
	return 0;
}

// we need to count the number of odd numbers in the given sequence , if the number of odd numbers in sequence are odd
// then there will be 2 remaining elements else there will be only one
// ex:
// 1 2 3 4 5
// on performing operations given we get
// 2 4 4 5
// 2 8 5
// 10 5 
// remaining 2 numbers cant be added as it dosent follow the rules given to us, notice that the number of odd numbers are
// odd in number i.e. 1,3,5 so a total of 3 odd numbers therefore our answer is 2 
// we need to handel one case that if there is only one  element then the answer is already 1 as it dosent matter what the
// input is.