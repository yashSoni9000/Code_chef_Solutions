public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x < 3) sout("LIGHT");
        else if (x >= 3 && x < 7) sout("MODERATE");
        else sout("HEAVY");
    }
}

// we are given condition that if x is less than 3 print light else if between 3 and 7 print moderate else print heavy