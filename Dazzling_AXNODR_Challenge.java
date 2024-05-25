public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        long n;
        n = sc.nextLong();
        long remainder =  n % 4L;
        if (remainder == 2 || remainder == 3) sout(3);
        else if (remainder == 1) sout(n);
        else sout(n + 3);
    }
}

// in this question we had to make observations by manually XORing and ANDing the numbers till N to get answer and find 
// pattern from those answer 
// in this the pattern was repeating after 4 
// the pattern was if N divisible by 4 the print N+3
// if remainder is 1 then directly print N
// if remainder is 2 or 3 then print 3