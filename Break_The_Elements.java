public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int temp,even=0;
        for(int i=0;i<n;i++){
            temp=sc.nextInt();
            if(temp%2==0) even++;
        }
        sout(even==n?0:even);
    }
}

// lets take example
// 10
// 2 4 6 8 10 12 14 3 5 7
// even can be split in odd+odd but odd can only be split into odd+even
// so even if we have less number of odd it would split in odd only and loop continues
// and so we have to convert evens as well to odd then
// thats why we converted all evens to odd with just one operation