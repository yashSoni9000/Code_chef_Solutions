import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0)
        {
            int x = sc.nextInt();
            // write your code here
            if (x >= 2000) System.out.println("YES");
            else System.out.println("NO");
        }

    }
}

// if given intake of chef is more than or equal to 2000 print yes else print no