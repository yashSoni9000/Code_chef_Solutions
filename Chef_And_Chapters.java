public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y, z;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        sout(x * y * z);
    }
}

// we need to print total number of chapter which we can get by multiplying all the given values