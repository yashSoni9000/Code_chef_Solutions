public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        int distance = x * 5;
        if (distance >= y) sout("YES");
        else sout("NO");
    }
}

// we find the total distance by multiplying by 5 and compare with y and print
// yes if distance calculated is more then y else print no