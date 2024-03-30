public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int temp;
        long positiveCount=0,negativeCount=0;
        for(int i=0;i<n;i++){
            temp=sc.nextInt();
            if(temp<0) negativeCount++;
            else if(temp>0) positiveCount++;
        }
        negativeCount--;
        positiveCount--;
        long posSum=(positiveCount*(positiveCount+1))/2;
        long negSum=(negativeCount*(negativeCount+1))/2;
        System.out.println(posSum+negSum);
    }
}

// by observation i checked that the count of positive numbers >0 has pairs of sum of n-1, similarly for negative numbers 
// we count the possible numbers of pairs and print the sum of both