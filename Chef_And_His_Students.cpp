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
	    int count=0;
	    string s;
	    cin>>s;
	    f(s.length()-1) if(s[i]=='<' && s[i+1]=='>') count++;
	    cout<<count<<e;
	}
	return 0;
}

// there is only one case where previously talking students will face each other afterward ex : ><>< in this case 2 pair
// student are talking to each other and when chef arrives the middle 2 students will turn to each other hence one pair
// i.e when we encounter < and > consecutively then we put that in count variable and at last print that count