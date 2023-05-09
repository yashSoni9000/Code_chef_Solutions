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
	    string s;
	   // cin.ignore();
	    cin>>s;
	    int in=0,y=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='I') in=1;
	        else if(s[i]=='Y') y=1;
	    }
	    if(in==1 && y==0) cout<<"INDIAN"<<e;
	    else if(y==1 && in==0) cout<<"NOT INDIAN"<<e;
	    else cout<<"NOT SURE"<<e;
	}
	return 0;
}

// if there is 'I' in the string then it is indian else not indian, if both 'I' and 'Y' are there then it is not sure.