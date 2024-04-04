public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        long w,l;
        w=sc.nextLong();
        l=sc.nextLong();
        if((w*l)%2==1) sout("NO");
        else sout("YES");
    }
}

// perimeter formula of rectangle is 2*(l+b), so perimeter will always be multiple of 2 so in order to check if perimeter is not
// divisible by 4 we need to make either of l or b to odd, if any of the given 2 side is odd then we can say that l+b sum will
// be odd and print no else print yes