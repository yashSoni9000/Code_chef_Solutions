#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,barcelona,eibar,madrid,malaga;
	string s;
	cin>>t;
	while(t--)
	{
	    f(4){
	        cin>>s;
	        if(s=="Barcelona")cin>>barcelona;
	        else if(s=="Eibar") cin>>eibar;
	        else if(s=="RealMadrid") cin>>madrid;
	        else cin>>malaga;
	    }
	    if(barcelona>eibar && madrid<malaga) cout<<"Barcelona"<<e;
	    else cout<<"RealMadrid"<<e;
	}
	return 0;
}

// first we will identify that what does the given string represent
//  if barcelona we take respective value in it and similarly we take all
// the values. Then we check the only condition given in the question , if that is true
// we print Barcelona else print RealMadrid