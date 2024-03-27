public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int[] a=new int[n];
        int[] b=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            b[i]=sc.nextInt();
        }
        int maxi=0,index=-1;
        for(int i=0;i<n;i++){
            int temp=a[i]*b[i];
            if(temp>maxi){
                maxi=temp;
                index=i;
            }
            else if(temp==maxi){
                if(b[i]>b[index]) index=i;
            }
        }
        sout(index+1);
    }
}

// firstly we need to get the max product and store the index if 2 have same product we then compare their rating and greater
// one index is stored and print the index+1 as question in 1 based indexing