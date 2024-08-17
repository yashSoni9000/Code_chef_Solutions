public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        sout(((x * 2) + (y * 2)) >= 1000 ? "YES" : "NO");
    }
}

// we need to find perimeter of given side of rectangle, if perimeter is greater than 1000 print yes else print no
// perimeter of rectangle is 2 * length + 2 * breadth 