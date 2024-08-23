public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y, z;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        sout((x * 4) + (y * 2));
    }
}
// since z course do not have any credit to it we do not need to add it to final result, rest multiply corresponding credit value
// to the course to get our answer