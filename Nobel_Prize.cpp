#define ll long long
#define f(end) for (register int i = 1, d; i <= end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, researchers, topics;
    cin >> t;
    while (t--)
    {
        cin >> researchers >> topics;
        int a[topics + 1] = {0};
        bool flag = false;
        f(researchers)
        {
            int n;
            cin >> n;
            a[n]++;
        }
        f(topics)
        {
            // cout<<a[i]<<" ";
            if (a[i] == 0) // checking what topics are remaining , if no topic remains then chef can't win
            {
                flag = true;
                break;
            }
        }
        // cout<<e;
        if (flag == true)
            cout << "Yes" << e;
        else
            cout << "No" << e;
    }
    return 0;
}

// this question was a play of understanding the question correctly
// as the language was bit tricky for me
// in this question if the reaseachers have taken a unique topic then
// chef can't choose that topic therefore we let remian the flag=false
// if the arrray of topic has a topic which is not assigned to anyone
// then only chef can win any prize