public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int[] a = new int[4];
        a[0] = sc.nextInt();
        a[1] = sc.nextInt();
        a[2] = sc.nextInt();
        a[3] = sc.nextInt();
        int size=(1<<4);
        boolean ans=false;
        for(int mask=1;mask<size;mask++){
            int sum=0;
            for(int i=0;i<4;i++){
                if((mask & (1<<i))!=0){
                    sum+=a[i];
                }
            }
            if(sum==0) ans=true;
        }
        sout(ans?"Yes":"No");
    }
}

// i used a method known as bit masking which is used in generating subset you can check the video here to get understanding
// of the concept, i have refered to same video.
// i just implement the logic that if the given subset sum is zero then we make our answer as true and print yes or no
// according to the given answer