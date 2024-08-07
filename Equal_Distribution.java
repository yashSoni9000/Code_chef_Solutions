public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        if ((a + b) % 2 == 0) sout("YES");
        else sout("NO");
    }
}

// we check if the sum of given 2 numbers is divisible by 2 then we print yes, the reason being that if sum is divisible by
// 2 then that sum can be divided equally in 2 parts if divided by 2