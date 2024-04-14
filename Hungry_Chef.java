public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,x,y,n,r;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x=sc.nextInt();
        y=sc.nextInt();
        n=sc.nextInt();
        r=sc.nextInt();
        // boolean ans=true;
        // int pb=0,nb=0;
        // for(int i=n;i>=0;i--){
        //     for(int j=(n-i);j<=n;j++){
        //         if((((i*y)+(j*x))<=r)&& ans){
        //             pb=i;
        //             nb=j;
        //             ans=false;
        //         }
        //     }
        // }
        // if((pb==0)&&(nb==0)) sout(-1);
        // else sout(nb+" "+pb);
        if(x*n>r) sout(-1);
        else{
            int j=r-(n*x);
            j/=(y-x);
            if(j>=n) j=n;
            sout(n-j+" "+j);
        }
    }
}

// i have used 2 approaches in this question first one is not optimal i.e by using nested loop, this not so optimal solution
// directly checks for the given condition in question and assigns premium and normal burger accordingly.
// but to get to optimal approach we need to make equation of given question
// equation is as follows
//   (x*i)+(y*j)<=r && i+j=n , where i and j are number of normal burger and premium burgers respectively 
// => x*(n-j)+(y*j)<=r
// => x*n-x*j+y*j<=r
// => x*n-j(x-y)<=r
// => x*n-r<=j(x-y)
// => (x*n-r)/(x-y)<=j , multiplying both sides by -1 we get
// => (r-x*n)/(y-x)>=j
// now according to this equation we can find premium burgers value
// but in one case where we can take all premium burgers j will be greater than n according to above condtion
// so we just need to assing max number of premium burgers and print rest of n-j normal burgers.