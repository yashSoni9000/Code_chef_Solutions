public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int count=0;
        String s=sc.next();
        for(int i=0;i<n-1;i++){
            char c1=s.charAt(i);
            char c2=s.charAt(i+1);
            if(c1==c2) count++;
        }
        sout(count);
    }
}

// on observation we can conclude that if in a pair the character are same then we would need to alternate them so we increase 
// the count/number of operation required to make the given string alternating binary string and print the count at last