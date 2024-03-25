public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        String s=new String();
        s=sc.next();
        if(n%2==1) sout("YES");
        else{
            int count0=0,count1=0;
            for(int i=0;i<n;i++){
                char c=s.charAt(i);
                if(c=='0') count0++;
                else count1++;
            }
            if(count0%2==1) sout("NO");
            else sout("YES");
        }
    }
}

// by observing we can see if given string is of odd length then it is always posssible to make string palindrome else in case
// of length of string is even we need to check if either of count of 0 or 1 is odd then it is not possible to make palindrome
// else it is possible