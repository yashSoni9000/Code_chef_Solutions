public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, a, b;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();

        if ((a + b) <= x) sout("YES");
        else sout("NO");
    }
}

// we need to check if the given number of apples and oranges sum is less than total amount of rupees bob has then print 
// yes else print no