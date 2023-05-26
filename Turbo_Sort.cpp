#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	vector <int> a(t);
	for(int i = 0; i< t ; i++){
	    cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int x : a)
	    cout<<x<<endl;
	return 0;
}


// we take first the given numbers in a array so that we can sort it in ascending order
// we then printed it one by one to get the required answer 

// Approach-2
// we can take the number in array and then sort using sort function where we
// pass the third argumnet in the sort function as the array itself, size of array and greater<int>() to get the descending order and then print them