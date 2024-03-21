import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main(String[] args) throws java.lang.Exception
    {
        int t, n, x;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while (t-- > 0) {
            n = sc.nextInt();
            int[] a = new int[n + 1];
            a[0] = sc.nextInt();
            int temp, maxi = a[0], sum = 0, superMaxi = 0;
            for (int i = 1; i <= n; i++) {
                a[i] = sc.nextInt();
            }

            System.out.println(maxSubArraySum(a));
        }
    }
    static int maxSubArraySum(int a[])
    {
        int size = a.length;
        int max_so_far = Integer.MIN_VALUE, max_ending_here = 0;

        for (int i = 0; i < size; i++) {
            max_ending_here = max_ending_here + a[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }
}

// in this question kadane's algo is used. I therefore inserted the initial x in the array as well to directly get the
// answer from the algo function.