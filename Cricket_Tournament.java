public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, m;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        m = sc.nextInt();
        if (m <= (n - 1)) sout("YES");
        else sout("NO");
    }
}

// we need to check if m <= (n-1) || in other terms n>=m print yes else print no. This is concluded by manually checking
// test cases one by one and observing pattern