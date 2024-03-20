import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main(String[] args) throws java.lang.Exception
    {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while (t-- > 0) {
            int x,y;
            x=sc.nextInt();
            y=sc.nextInt();
            if(x<=y) System.out.println(0);
            else System.out.println(x-y);
        }
    }
}

// by observation we can see that if x is less than y then all can be draw and RCB will win the game else after x>y the difference
// is the number of matched they need to win in order to go in playoffs