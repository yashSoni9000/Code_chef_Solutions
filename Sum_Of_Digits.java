public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int sum = 0;
        while (n > 0) {
            int last = n % 10;
            sum += last;
            n /= 10;
        }
        sout(sum);
    }
}

// we keep adding last number to our sum and divide n by 10 to get next last number and keep dividing it till n < 1