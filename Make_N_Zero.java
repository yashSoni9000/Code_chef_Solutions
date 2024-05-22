public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        if ((n == 1) || (n == 2) || (n == 5)) sout("NO");
        else sout("YES");
    }
}

// if we check number 1 to 25 i observed that it is not possible in case of n=1,2 & 5 else in all cases we will be able to 
// make the given digit.
// ex N = 23
// 10+10+3
// (6+4)+(6+4)+3
// ((3+3)+4)+((3+3)+4)+3 
// hence we can check that except 1,2 & 5 all can become 0 after any number of operations