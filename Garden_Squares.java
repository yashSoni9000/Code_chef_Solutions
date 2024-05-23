public static void main(String[] args) throws java.lang.Exception
{
    // FastReader sc = new FastReader();
    Scanner sc = new Scanner(System.in);
    int t, n, m;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        m = sc.nextInt();
        int count = 0;
        int itr = Math.min(n, m);
        String[] s = new String[n];
        for (int i = 0; i < n; i++) {
            s[i] = sc.next();
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                int one = i + 1, two = j + 1;
                while (one < n && two < m) {
                    char c1 = s[i].charAt(j);
                    char c2 = s[i].charAt(two);
                    char c3 = s[one].charAt(j);
                    char c4 = s[one].charAt(two);
                    if (c1 == c2 && c2 == c3 && c3 == c4) count++;
                    one++;
                    two++;
                }
            }
        }
        sout(count);
    }
}

// the given question was to implement with brute force and check one by one for each squares and increase each square 