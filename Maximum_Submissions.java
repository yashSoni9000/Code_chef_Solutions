public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        sout(x * 2);
    }
}

// lets suppose we are given x = 1 min for contest then in second it will be 60 and submission can be made in every 30 sec
// so 60 / 30 = 2 so 60 and 30 will be common in multiplying by x to get desired result so i divided both of them such that
// we get always then need to multiply x with that number to get our answer