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
	    int temp,count=0;
	    f(5){
	        cin>>temp;
	        if(temp==1) count++;
	    }
	    if(count==0) cout<<"Beginner"<<e;
	    else if(count==1) cout<<"Junior Developer"<<e;
	    else if(count==2) cout<<"Middle Developer"<<e;
	    else if(count==3) cout<<"Senior Developer"<<e;
	    else if(count==4) cout<<"Hacker"<<e;
	    else cout<<"Jeff Dean"<<e;
	}
	return 0;
}


// we take input if that question is solved we increase the count
// according to the count we print the values