public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x1, y1, x2, y2;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x1 = sc.nextInt();
        y1 = sc.nextInt();
        x2 = sc.nextInt();
        y2 = sc.nextInt();
        if ((x1 + y1) <= (x2 + y2)) sout(x1 + y1);
        else sout(x2 + y2);
    }
}

// if x1 + y1 is less than x2 + y2 then print x1 + y1 else print x2 + y2