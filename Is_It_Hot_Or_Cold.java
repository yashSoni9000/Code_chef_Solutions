public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, c;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        c = sc.nextInt();
        if (c > 20) sout("HOT");
        else sout("COLD");
    }
}

// if given c is more than 20 print hot else print no