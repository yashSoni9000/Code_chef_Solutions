public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int temp=n,count=0;
        while(temp>0){
            int num=temp%2;
            if(num==1) count++;
            temp/=2;
        }
        sout(count-1);
    }
}

// we need to check the binary form of given number N and count the number of set bits in binary form of it
// and print one less than number of set binary bits, this is becuase we can say that we need to represent N in terms of
// 2 powers so i.e. when N splits in X+Y and further X or Y splits if they are not power of 2 and so on , so we can say
// that at last all will be power of 2 so we need to count the number of set bits that will count in original making of
// N number and we reduce 1 as the last split dosent matter for us to  count as it is already in power of 2