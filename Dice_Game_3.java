public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        if(n%2==1){
            int half=n/2;
            sout((half*12)+6+half);
        }else{
            sout(((n/2)*12)+n/2);
        }
    }
}

// we can get max score only if we follow pattern [1,6,1,6] when n is even else if n is odd then
// we need to follow this pattern [1,6,1,6,6] so according to this half number should be multiplied by 12 (acc to given condtion)
// and add half as well +6 in case of odd and in even just add half to half * 12