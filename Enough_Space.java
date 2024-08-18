public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        x = sc.nextInt();
        y = sc.nextInt();
        sout(x + (y * 2) <= n ? "YES" : "NO");
    }
}

// if x * 1 + y * 2 <= toatal storage (n) then print yes else print no