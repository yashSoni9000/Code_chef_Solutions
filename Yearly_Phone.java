public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int x;
        x = sc.nextInt();
        int last = x % 10;
        x /= 10;
        int secondLast = x % 10;
        sout("K" + secondLast + last);
    }
}

// we take the last 2 digits with % operator and add with k to get our answer.