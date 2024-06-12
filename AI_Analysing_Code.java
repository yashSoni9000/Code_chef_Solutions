public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, n;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        if (n <= 1000) sout("YES");
        else sout("NO");
    }
}

// we need to check if the given integer is less than or equal to 1000 we print yes else print no