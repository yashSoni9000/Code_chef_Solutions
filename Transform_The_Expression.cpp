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
	    cin>>s;
	    stack<char> c;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='(' || s[i]=='^' ) c.push(s[i]);
	        else if(s[i]==')'){
	            while(c.top()!='('){
	                cout<<c.top();
	                c.pop();
	            }
	            c.pop();
	        }
	        else cout<<s[i];
	    }
	    cout<<e;
	}
	return 0;
}


// the question is same as converting infix to postfix format