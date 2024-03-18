import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main(String[] args) throws java.lang.Exception
    {
        long t,a,b;
        Scanner sc = new Scanner(System.in);
        t = sc.nextLong();
        while (t-- > 0) {
            a=sc.nextLong();
            b=sc.nextLong();
            long half=b/2;
            if(a <= half || a==b) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}

// we need to check if a is less than or equal to half of b then or a==b then in these 2 cases it is possible that adding x
// to both a and b will somehow divisible by a, you can check by taking multiple test cases
// i missed one test case where a==b that's why i got wrong answer in one of the three test cases