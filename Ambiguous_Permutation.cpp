#define ll long long
#define f(end) for (int i = 0; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 	cin>>t;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int arr1[n + 1] = {0}, arr2[n + 1] = {0};
        bool flag = true;
        for (int i = 1; i <= n; i++)
            cin >> arr1[i];
        for (int i = 1; i <= n; i++)
            arr2[arr1[i]] = i;
        for (int i = 1; i <= n; i++)
        {
            if (arr2[i] != arr1[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "ambiguous" << e;
        else
            cout << "not ambiguous" << e;
    }
    return 0;
}

// this question has a small concept to understand
// we are given a random permutation of number and we need to find the inverse permutation
// what inverse permuation means is that lets say we are given the same permutation 2 3 4 5 1
// so its index will be (index starts from 0)                                       1 2 3 4 5
// we need to arrange it in this order i.e. the index becomes number and number becomes the index
// so our req permuation is 5 1 2 3 4 now we simply need to put it in programming to find the ans
// we stored the numbers in array and again took an array and stored the first arr number as index
// and give them the value i and at last we check if each number in both that array are same or not
// if yes then we print ambiguous else print not ambiguous
