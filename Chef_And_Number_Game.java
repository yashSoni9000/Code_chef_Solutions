public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int temp,neg=0,pos=0;
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            temp=sc.nextInt();
            if(temp<0) neg++;
            else pos++;
        }
        if(neg==0 || pos==0) sout(n+" "+n);
        else sout(pos+" "+neg);
    }
}

// the maxinum is only possible when all the given numbers are positive and min will also be n else we calculate the
// numbers less than 0 and more than 0 and show their count if either of them is not 0 else print those count of variables