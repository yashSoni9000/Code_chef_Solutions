public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if (x * 2 > y) sout("NO");
        else sout("YES");
    }
}

// if given cost of each ice cream is x and he want to buy 2 of them then total price would be x * 2 and this should be 
// smaller than or equal to y (amount chef has) and print yes and no accordingly