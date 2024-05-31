public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if ((x + 3) > 10) sout("NO");
        else sout("YES");
    }
}

// we are given that there are 3 assingments so if current hour + 3 hours (each assignment take 1 hour)  is greater then
// 10 then he can not complete else he will complete