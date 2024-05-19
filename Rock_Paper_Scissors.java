public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int ans = 0;
        boolean flag = false;
        String s = sc.next();
        if (n == 1) sout(1);
        else {
            // for (int j = 0; j < n - 1; j++) {
            //     char c1 = s.charAt(j);
            //     char c2 = s.charAt(j + 1);
            //     if ((c1 != c2)) {
            //         ans++;
            //         flag = false;
            //     }
            //     else if (flag) {
            //         ans++;
            //         flag = false;
            //     }
            //     else {
            //         ans++;
            //         j++;
            //         flag = true;
            //     }
            // }
            // if ((s.charAt(n - 1) != s.charAt(n - 2)) || flag) ans++;
            // sout(ans);
            for (int j = 0; j < n - 1; j++) {
                char c1 = s.charAt(j);
                char c2 = s.charAt(j + 1);
                if (c1 == c2) {
                    j++;
                    ans++;
                }
            }
            sout(n - ans);
        }
    }
}

// i tried with my approach but failed many time but after checking the solution i came to know that we need to calculate the
// count of nubers which are equal consecutively and subtract from n to get answer this is due to the condition imposed that
// chef can not play same move twice