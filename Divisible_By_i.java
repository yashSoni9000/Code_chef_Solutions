public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int less=n-1;
        int[] a=new int[n];
        a[0]=n;
        boolean flag=true;
        for(int i=1;i<n;i++){
            if(flag){
                a[i]=a[i-1]-less;
                flag=false;
            }else{
                a[i]=a[i-1]+less;
                flag=true;
            }
            less--;
        }
        for(int i=n-1;i>=0;i--) System.out.print(a[i]+" ");
        sout("");
    }
}

// i observed pattern that we store n as last element of our output and we take a number less than n and perform operations with
// that, if flag is true then we subtract previos index with less numbers and toggle flag else we add less to previous number
// and toggle flag as well and decrement the count of less variable