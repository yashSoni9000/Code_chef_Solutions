public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if (x < 50) sout("Z");
        else if (y < 50 && x >= 50) sout("F");
        else sout("A");
    }
}

// we need to apply the given condition and print grade accordigly for "Z", "F" and "A" grade