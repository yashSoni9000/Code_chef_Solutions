public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, n, m, x, y;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        m = sc.nextInt();
        x = sc.nextInt();
        y = sc.nextInt();
        int a = n * x;
        int b = m * y;
        sout(a + b);
    }
}

// we need to multiply bone with number of treats and blood with number of their respctive treat and print the sum
// collectively to get our answer