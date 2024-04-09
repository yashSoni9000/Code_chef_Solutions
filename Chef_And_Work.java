public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n,k;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        k=sc.nextInt();
        int w,count=0,sum=0;
        boolean ans=true;
        for(int i=0;i<n;i++){
            w=sc.nextInt();
            if(w>k) ans=false;
            else{
                sum+=w;
                if(sum>k){
                    count++;
                    sum=w;
                }
            }
        }
        count++;
        if(ans) sout(count);
        else sout(-1);
    }
}

// I checked that if given weight of box is greater than k then it is not possible that chef will be able to move all boxes 
// hence answer is -1 else we carry the previous box and add till the sum is more than k capacity then we increase the 
// number of rounds needed for chef to do and remove all previous boxes and add current box in sum 
// by doing above operation we can see that there is always we need one round in order to complete chef to carry boxes 
// therefore i added one counter and printed answer accordingly