public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        double sum = 1;
        for (int i = 1; i <= 2; i++) {
            sum = sum * (n - 2 + i) / i;
        }
        sout((int) sum * 2);
    }
}

// we need to find the number of possible combinations with n numbers one we get that we double it as in the first combination
// the one who was captian may be treated as vice captian for each of possible combination hence multiplied by 2