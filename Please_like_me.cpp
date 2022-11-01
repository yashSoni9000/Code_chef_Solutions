#include <bits/stdc++.h>
#define ll long long
#define f(end) for (int i = 0; i < end - 1; i++)
#define e '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ll likes, daysToLive, startDayLikes, constAdd;
    cin >> t;
    while (t--)
    {
        cin >> likes >> daysToLive >> startDayLikes >> constAdd;
        bool aliveOrDead = false;
        if (startDayLikes >= likes)
            aliveOrDead = true;
        else
        {
            f(daysToLive)
            {
                startDayLikes = startDayLikes + (startDayLikes * constAdd);
                if (startDayLikes >= likes)
                {
                    aliveOrDead = true;
                    break;
                }
            }
        }
        if (aliveOrDead == true)
            cout << "ALIVE AND KICKING" << e;
        else
            cout << "DEAD AND ROTTING" << e;
    }
    return 0;
}

// here I used direct approach where i checked if the no of likes on day 1 is already
// greater than required likes then we will flag 1 else
// else check if the condition which is gine in question give the requied amount of likes
// before d days then we set flag 1 and break