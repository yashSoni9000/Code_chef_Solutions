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
	    int a[n],sum=0;
	    f(n) cin>>a[i];
	    sort(a,a+n);
	    int temp=a[n-1];
	    a[n-1]=a[1];
	    a[1]=temp;
	    f(n-1) sum+=(a[i]+a[i+1]);
	    cout<<sum<<e;
	}
	return 0;
}

// after sorting the given array we need the min element to be at first so that its appearance is minimized in the sum
// and we need to replace the max element with the second minimum element to maximize the sum
// ex 
// 1 2 3 4 5
// 1 5 3 4 2 // optimized sum =27
// 1 2 3 5 4 // sum = 25 not optimized
/*
#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
    
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int temp, sum = 0, first = INT_MAX, second = INT_MAX;
        f(n) {
            cin >> temp;
            if (temp <= first) {
                second = first;
                first = temp;
            }
            else if (temp < second && temp != first)
                second = temp;
            sum += temp;
        }
        sum = (2 * sum) - (first + second);
        cout << sum << e;
    }
    return 0;
}

// this approach does similar thing to previous approach but is more optimised and in terms of sorting and memory
*/