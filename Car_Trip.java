public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x < 300) sout(3000);
        else sout(x * 10);
    }
}

// if given km is less than 300 then also chef need to play for 300 km as mentioned in question so we print 3000 else print
// the km by 10 to get x km cost