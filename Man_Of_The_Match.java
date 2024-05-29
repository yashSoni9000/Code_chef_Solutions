public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int index = 0, maxi = Integer.MIN_VALUE;
        for (int i = 0; i < 22; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            int sum = a + (b * 20);
            if (sum > maxi) {
                index = i + 1;
                maxi = sum;
            }
        }
        sout(index);
    }
}

// for each player i we need to check if it has the max value among the given players if max then we assing that index 
// to our answer and also set the new max else continue and print the index at last