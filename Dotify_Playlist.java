public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n,k,l;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        k=sc.nextInt();
        l=sc.nextInt();
        int[] a=new int[n];
        int[] b=new int[n];
        int m,lang;
        for(int i=0;i<n;i++){
            m=sc.nextInt();
            lang=sc.nextInt();
            if(lang==l) a[i]=m;
        }
        Arrays.sort(a);
        int ans=0,count=0;
            for(int i=n-1,j=0;i>=0;i--,j++){
                b[j]=a[i];
                if(a[i]>0) count++;
            }
            for(int i=0;i<k;i++){
                ans+=b[i];
            }
        if(count<k) sout(-1);
        else sout(ans);
    }
}

// we first add those songs which hava same languages in array and then reverse sort the array and add to answer k time the value
// of that index of array and if number of elements in array which are greater than 0 is less than k the it is not possible to
// make such playlist else print the length of playlist