public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, g, b;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        g = sc.nextInt();
        b = sc.nextInt();
        sout(b - g);
    }
}

// we need to print the number of boys who can not participate so that will be the difference of total number of boys -
// total number of girls to get our answer