#define ll long long
#define f(end) for (register int i = 0, d; i < end; i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        char a[8][8];
        f(8)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i == 0 && j == 0)
                {
                    a[i][j] = 'O';
                    k--;
                }
                else if (k != 0)
                {
                    a[i][j] = '.';
                    k--;
                }
                else
                    a[i][j] = 'X';
            }
        }
        f(8)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << a[i][j];
            }
            cout << e;
        }
    }
    return 0;
}

// In this question we need to assume that king is at the top left corner
// of the chessboard now we need to put '.' until the k input is 0 (including 'O')
// rest of the  place we can fill with 'X' and print the array
// we could have done it in only one nested loop by directly printing the req output
// but i didnt had time that time so i did as fast a possible