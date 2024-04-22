public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++) a[i]=sc.nextInt();
        Arrays.sort(a);
        boolean ans=true;
        int sum=0;
        for(int i=0;i<n;i++){
            int temp=(i+1)-a[i];
            if(temp<0){
                ans=false;
                break;
            }
            else sum+=temp;
        }
        if(ans) sout(sum);
        else sout(-1);
    }
}

// in essense we need to check if the given array is sorted or not and if possible then print the number of moves required
// to do so, we sort the given array and compare with i+1 index (as array is 0 based index) that if the given number in array
// is less than the index then we add the difference between index and element to the sum else if at any point of time
// the element is greater than index then we do not need to check further and make answer false and print -1 else print the sum