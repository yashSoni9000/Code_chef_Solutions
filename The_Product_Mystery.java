public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        long b,c;
        b=sc.nextLong();
        c=sc.nextLong();
        long gcd=gcd(b,c);
        sout(c/gcd);
    }
}

//----------------------Ignore Code-------------------------//
public static long gcd(long a, long b)
{
    // if b=0, a is the GCD
    if (b == 0) return a;
    else return gcd(b, a % b);
}
public static void sout(Object obj) {
    System.out.println(obj);
}

// by observing we can see that when we take gcd of given 2 numbers and divide it by c we get our answer