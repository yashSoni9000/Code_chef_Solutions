public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, n, m;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        m = sc.nextInt();
        sout(n < m ? "YES" : "NO");
    }
}

// acc to question we check that if n < m we print yes else print no