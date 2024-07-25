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
        int div = z / y;
        if (div >= x) sout(0);
        else sout(x - div);
    }
}

// we first find the required number of source of income by dividing z capacity with y income to get max number of resources
// if those resouces are greater than current resources then he don't need to remove any resource else we remove 
// max number of resources from given number of resources