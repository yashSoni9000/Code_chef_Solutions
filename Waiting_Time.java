public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, k, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        k = sc.nextInt();
        x = sc.nextInt();
        sout((k * 7) - x);
    }
}

// we age given weeks so we multiply by 7 to get number of days and since x days have passed we can print remaining days by
// subtracting from total number of days