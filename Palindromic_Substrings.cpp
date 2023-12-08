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
	    string s1,s2;
	    cin>>s1>>s2;
	    map<char,int> mp1;
	    map<char,int> mp2;
	    map<char,int> mp3;
	    bool ans=false;
	   // map<char,int> mp2;
	    f(s1.length()) mp1[s1[i]]++;
	    f(s2.length()) mp2[s2[i]]++;
	    for(auto it:mp1){
	        mp3[it.first]++;
	    }
	    for(auto it:mp2){
	        mp3[it.first]++;
	    }
	    for(auto it:mp3){
	        if(it.second>1){
	            ans=true;
	            break;
	        }
	    }
	    if(ans) cout<<"Yes"<<e;
	    else cout<<"No"<<e;
	}
	return 0;
}

// first we check the freq of input of both the given string and we need to check if both the given strings have 
// a character in common , if yes then it will be palindromic string
// ex,
// aabcds
// euoiqu
// we can check that any char is not same in both string so we can not make palindrome string
// on the other hand if we are given the following 2 string
// axvbb
// aerdf
// the we can make string aa from the given string and print yes