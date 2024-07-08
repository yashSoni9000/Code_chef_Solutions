public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x < 4) sout("MILD");
        else if ((x >= 4) && (x < 7)) sout("MEDIUM");
        else sout("HOT");
    }
}

// according to the level given we print corresponding spice level message