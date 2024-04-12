public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int num=n%8;
        switch(num){
            case 0 -> sout((n-1)+"SL");
            case 1 -> sout((n+3)+"LB");
            case 2 -> sout((n+3)+"MB");
            case 3 -> sout((n+3)+"UB");
            case 4 -> sout((n-3)+"LB");
            case 5 -> sout((n-3)+"MB");
            case 6 -> sout((n-3)+"UB");
            case 7 -> sout((n+1)+"SU");
        }
    }
}

// by observing the pattern we can see that if number % 8 is that according to the result we add 3 or remove 3 from number
// and if modulo is 1 and 0 then we add one and remove 1 from n accordingly and add the string given in question 