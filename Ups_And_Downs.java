public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int[] a= new int[n];
        for(int i=0;i<n;i++) a[i]=sc.nextInt();
        Arrays.sort(a);
        int front=0,back=n-1;
        boolean flag=true;
        for(int i=0;i<n;i++){
            if(flag){
                System.out.print(a[front]+" ");
                front++;
                flag=false;
            }else{
                System.out.print(a[back]+" ");
                back--;
                flag=true;
            }
        }
        sout("");
    }
}

// sort the given array and print alternating the first and last digit in loop by increasing and decreasing respectively
// then only we will be able to get < > < > pattern consistently