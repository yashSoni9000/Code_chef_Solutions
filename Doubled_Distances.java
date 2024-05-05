public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        boolean ans = true;
        int[] a = new int[n];
        int[] b = new int[n - 1];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        Arrays.sort(a);
        for (int i = 1; i < n; i++) b[i - 1] = a[i] - a[i - 1];
        for (int i = 0; i < n - 2; i++) {
            if ((b[i] * 2 == b[i + 1]) || (b[i] == b[i + 1] * 2)) continue;
            else ans = false;
        }
        sout(ans ? "YES" : "NO");
    }
}

// by observing i saw that if sort the given number and find the difference between them that must be alternate of
// double or half of initial and previous number
// ex
// 26 40 61 74 94
// diff= 14 21 13 20
// here there were no alternate half or double number 
// whereas 
// 1 2 4 8
// diff= 1 2 4
// has a double difference between them
// also 
// 16 18 19 21 22 24
// diff= 2 1 2 1 2 
// so we can see the alternating terms of half and double