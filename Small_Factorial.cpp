#include <bits/stdc++.h>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;

int main() {
	// your code goes here
	int tc ;
	cin>>tc;
	while(tc--)
	{
	int n;
	cin>>n;
	cpp_int count = 1;
	for(int i = 1; i<=n; i++)
	{
	       count = count *i;
	       
	}
	cout <<count<<endl;
}
}

// we need to print the factorial of number using a for loop where we increment i vairable each time and multiply it to 
// initialized value of count