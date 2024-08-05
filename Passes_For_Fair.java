
public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, k;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        k = sc.nextInt();
        if (k >= (n + 1)) sout("YES");
        else sout("NO");
    }
}

// we check if number of friends including check which is equal to n + 1 are less than or equal to number of passes then
// all of them can go in fair else the can not