public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x > 0 && x < 5) sout("YES");
        else sout("NO");
    }
}

// if the given number lies in 1 and 4 (1  & 4 inclusive) the we print yes else print no