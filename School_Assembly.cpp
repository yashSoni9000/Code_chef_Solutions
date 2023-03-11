#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1, n;
    // 	cin>>t;
    while (t--)
    {
        cin >> n;
        int arr[n + 1], count = 0, temp;
        arr[n] = INT_MAX;
        f(n) cin >> arr[i];
        for (int i = 1; i <= n; i++)
        {
            count++;
            if (arr[i] <= arr[i - 1])
            {
                temp = arr[i - 1];
                while (arr[i] <= temp)
                    i++;
            }
        }
        cout << count << e;
    }
    return 0;
}

// I have used a bit costly approach to solve it
// in my method I started from second position and checked if the current
// element is less than its previous element if yes we assign the previous
// value to a temp variable and then increment i till the number is greater than temp
// eg
// 1 4 2 5 3
// we increment as we go in loop so count is 1
// now 4>1 so i++
// now 2<4 so temp=4 and while i+1 is less than 4 we incremnt
// i runs one time and then arr[i]=5 > 4 so exit while loop
// and count ++ and i++
// again 3 is less than 5 so i++
// now we reached last element which is int maximum so conditions are rejected and we
// exit the loop and print count

//////////////////////////////////
// More optimised approach

/*
#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1,n;
// 	cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],count=0,temp,max=0;
        f(n){
            cin>>temp;
            if(temp>max){
                count++;
                max=temp;
            }
        }
        cout<<count<<e;
    }
    return 0;
}
*/