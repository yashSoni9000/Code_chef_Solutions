#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    int sum=a+b,value,answer=0,digit;
	    while(sum)
	    {
	        digit=sum%10;
	        switch(digit)
	        {
	        case 0:
	            value=6;
	            break;
	        case 1:
	            value=2;
	            break;
	        case 2:
	            value=5;
	            break;
	        case 3:
	            value=5;
	            break;
	        case 4:
	            value=4;
	            break;
            case 5:
	            value=5;
	            break;
            case 6:
	            value=6;
	            break;
            case 7:
	            value=3;
	            break;
            case 8:
	            value=7;
	            break;
            case 9:
	            value=6;
	            break;
	        }
	        answer+=value;
	        sum/=10;
	    }
	    cout<<answer<<e;
	}
	return 0;
}

// I have used switch case approach in this question
// I made a loop till the number of digits after the sum of a+b
// and then accessed every last digit using modulo operator and check the digit's value in switch case
// and the added it to my answer and lastly remove the last digit from the sum number
// finally we print the answer