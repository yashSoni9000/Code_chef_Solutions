public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if ((x - y) <= 0) sout(0);
        else sout(x - y);
    }
}

// if difference from first to second is less than or equal to 0 then there are enough number of chairs else print 
// the difference