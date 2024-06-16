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
        if (x > y && x > z) sout("Setter");
        else if (y > z) sout("Tester");
        else sout("Editorialist");
    }
}

// we need to find max number among the given 3 number and print according to that if x is largest then print setter else if
// y is largest print tester else print editorialist