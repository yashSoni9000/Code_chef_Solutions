public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, n, m;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        n = sc.nextInt();
        m = sc.nextInt();
        if (x + m >= n) sout("YES");
        else sout("NO");
    }
}

// if sum of x + m ie om money + fund is more than laptop worth the he can buy so print yes else print no