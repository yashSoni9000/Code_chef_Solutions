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
	t++;
	while(t--)
	{
	    char s[12];
	    cin.getline(s,12);
	    string ans="";
	    char *p= strtok(s,"/");
	    while(p){
	        int num=stoi(p);
	        if(num<=12) ans+='1';
	        else ans+='0';
	        p=strtok(NULL,"/");
	    }
	    if(ans=="110") cout<<"BOTH"<<e;
	    else if(ans=="010") cout<<"DD/MM/YYYY"<<e;
	    else if(ans=="100") cout<<"MM/DD/YYYY"<<e;
	}
	return 0;
}

// first i took the line in input and then splitted it by '/' 
//now the splitted string is converted to integer and checked if it is lessthan 12
// we add 1 to answer else 0
// if code is 110 ie both were less than 12 then answer is both else we print accordingly