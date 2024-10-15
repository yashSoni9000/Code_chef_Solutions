public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x == 6) sout("YES");
        else sout("NO");
    }
}

// given in question we get token if die rolls to 6, therefore the rolled number x given in input we check if it is 6 we print
// yes else print no