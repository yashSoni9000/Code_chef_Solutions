public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        int diff = x - y;
        if (diff >= 18) sout("RCB");
        else sout("CSK");
    }
}

// if difference is of RCB vs CSK is greater than or equal to 18 print RCB else print CSK