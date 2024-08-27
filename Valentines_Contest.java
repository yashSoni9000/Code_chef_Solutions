public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, n;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        if (n == 121) sout("LIKELY");
        else sout("UNLIKELY");
    }
}

// if n == 121 print likely else print unlikely