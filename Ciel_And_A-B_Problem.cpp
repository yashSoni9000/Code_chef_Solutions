#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
// 	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int differ=abs(a-b);
	    int temp=differ%10;
	    if(temp==9) temp--;
	    else temp++;
	    differ/=10;
	    differ*=10;
	    differ+=temp;
	    cout<<differ<<e;
	}
	return 0;
}

// we first take the difference of given numbers and we need to exactly change one digit, one approach is to just add 1 to 
// difference number but it will fail as what if the difference is 19 then adding one would be 20 this makes it 2 digit diff
// therefore we need to take out one digit and add one to it, this approach also has one thing to keep in mind, that what if
// the last digit is also 9 so we have to decrease it else in all cases we will increase and add back to the difference
// and print the answer