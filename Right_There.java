public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        x = sc.nextInt();
        sout(n <= x ? "YES" : "NO");
    }
}

// if number of people is less than or equal to the capacity of hall then print yes else print no