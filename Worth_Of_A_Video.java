public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, s;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        s = sc.nextInt();
        sout(s * 24000);
    }
}

// we need to multiply by 24000 as each video has 24 frams and each frame has 1000 word so total worth is 24 * 1000 for each 
// image/frame so in order to get find worth of s second we multiply s by 24000