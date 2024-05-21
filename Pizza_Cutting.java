public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        if (n % 2 == 0 || n == 1) sout("YES");
        else sout("NO");
    }
}
// if we can cut only according to the given condition then the possible pieces will always be even and also when there is one
// cut else if the given pices are odd then it is not possible to cut according to given condition