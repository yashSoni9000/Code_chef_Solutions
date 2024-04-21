public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        // int[] a=new int[n];
        // int j=0;
        // for(int i=1;i<=n;i+=2){
        //     a[j]=i;
        //     j++;
        // }
        // for(int i=2;i<=n;i+=2){
        //     a[j]=i;
        //     j++;
        // }
        // for(int i=n-1;i>=0;i--) System.out.print(a[i]+" ");
        for(int i=n;i>0;i--) System.out.print(i+" ");
        sout("");
    }
}
// i used naive approach first then from that i got to optimal solution
// where i alternated the odd and even number and printed them in reverse, althought i gives correct output i suddenly 
// realised that when i reverse the numbers from 1 to n there is no way z=x|y so i tried printing numbers in reverse and 
// it worked as well ;)