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
	    string s;
	    int count=0;
	    cin>>s;
	    f(s.length()){
	        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' ) count=0;
	        else count++;
        if(count>2) break;
	    }
	    if(count>2) cout<<"Happy"<<e;
	    else cout<<"Sad"<<e;
	}
	return 0;
}

// eg
// abcdeeafg
// we checked that if 'a' is not a vowel then we reset the count to =0 but 
// 'a' is a vowel so we increment the count for checking our substring
// next we encountered b which is a consonant so we reset the count from
// 1 to 0 and it keeps doing it till 'e' is encountered and then again 'e'
// is encountered so now count is 2 and then 'a' is found so count=3 which is 
// greater than 2 so we no need to check further and check the condition
// that if contiguous substring is >2 then chef is happy in our case count is 3
// therefore chef is happy