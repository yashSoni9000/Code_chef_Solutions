public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        int maxi = Math.max(a, b);
        sout(7 - maxi);
    }
}

// whosoever is closest to win will give us the least difference from winning the match and ending it so we find max points
// scored and then subtract by 7 to get desired result