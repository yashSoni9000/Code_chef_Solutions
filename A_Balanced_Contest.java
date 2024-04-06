public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n,p;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        p=sc.nextInt();
        int easy=p/2,hard=p/10,temp,hrd=0,ez=0;
        for(int i=0;i<n;i++){
            temp=sc.nextInt();
            if(temp>=easy) ez++;
            else if(temp<=hard) hrd++;
        }
        if((ez==1)&&(hrd==2)) sout("yes");
        else sout("no");
    }
}

// we need to check the count of easy and hard problems by checking if number of people solving problem is greater than 
// reqired easy threshold then we increase the count of easy problem similarly we check for hard count and at last we 
// check if easy count is 1 and hard count is 2 then we print yes else print no