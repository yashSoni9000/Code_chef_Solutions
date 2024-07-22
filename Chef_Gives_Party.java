public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, x, k;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        x = sc.nextInt();
        k = sc.nextInt();
        if ((n * x) <= k) sout("YES");
        else sout("NO");
    }
}
// if total cost i.e. n * x is less then amount that chef has then print yes else print no