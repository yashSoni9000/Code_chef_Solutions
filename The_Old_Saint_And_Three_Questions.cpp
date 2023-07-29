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
	    int count1=0,count2=0,count1a=0,count2a=0,temp;
	    f(3){
	        cin>>temp;
	        if(temp==1) count1++;
	        else count2++;
	    }
	    f(3){
	        cin>>temp;
	        if(temp==1) count1a++;
	        else count2a++;
	    }
	    if(count1==count1a && count2==count2a) cout<<"Pass"<<e;
	    else cout<<"Fail"<<e;
	}
	return 0;
}

// we check the freq of each correct answer and wrong answer int he given question and then check the freq of given hero
// answers if both of their count of correct and wrong asnwer matches we print pass else print fail