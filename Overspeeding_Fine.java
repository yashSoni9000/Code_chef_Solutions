public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x <= 70) sout(0);
        else if (x > 70 && x <= 100) sout(500);
        else sout(2000);
    }
}

// if speed is less than 70 no fine so print 0 else if between 70 and 100 print 500 else print 200 in case of speed above 100