public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b, c;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        int maxi = Math.max(Math.max(a, b), c);
        int mini = Math.min(Math.min(a, b), c);
        sout(maxi - mini);
    }
}

// we find the max and min of given 3 number and subtract them to get our answer