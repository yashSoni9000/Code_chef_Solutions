public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int num = n * 10;
        num *= 3;
        sout(num / 2);
    }
}

// in short we need to find 30% of total cost with n items therefore i first multiplied by 10 and and then by 3 to get
// total cost and then divide by 3 to get our answer of 30% profit