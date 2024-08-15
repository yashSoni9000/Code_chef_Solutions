public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        sout((x + 1) / 2);
    }
}

// to get number of channels we add one to current channels and divide by 2, this helps us to skip the checking of odd or even 
// numbers and get answer directly