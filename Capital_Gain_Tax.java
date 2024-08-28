public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if (x > y) sout("DECREASED");
        else if (x < y) sout("INCREASED");
        else sout("SAME");
    }
}

// if x > y print decreased else if x < y print increased else print same