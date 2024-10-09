public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, a, b;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        sout(Math.min(a, b));
    }
}

// since chef need atleast one of each ingredient, therefore to make max burgers, the one ingredient which is min will be the 
// maximum number of burgers
// ex 10 bun and 12 petties
// since we need one each of above we would end up making 10 burgers but wont be able to make 2 more burgers as there are 
// not enough buns