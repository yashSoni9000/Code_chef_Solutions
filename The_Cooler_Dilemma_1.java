public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int x, m;
        long y, ans = 1;
        x = sc.nextInt();
        y = sc.nextLong();
        m = sc.nextInt();
        ans = x * m;
        if (ans >= y) sout("NO");
        else sout("YES");
    }
}

// we need to multiply by m to x cost of renting to get total cost of renting and compare with price of cooler if greater then we
// print no else print yes