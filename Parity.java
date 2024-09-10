public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        sout((n % 2) == 0 ? "YES" : "NO");
    }
}

// to divide n chocolates between 2, n must be divisible by 2 therefore we check divisibility by modulo operator and print
// yes if result is 0 else print no