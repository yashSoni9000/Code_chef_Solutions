public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,h,x,y1,y2,k;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        h=sc.nextInt();
        x=sc.nextInt();
        y1=sc.nextInt();
        y2=sc.nextInt();
        k=sc.nextInt();
        if((x>=h)||(y1>=h)||(y2>=h)) sout(1);
        else{
            double countx;
            countx=Math.ceil(((double)h/(double)x));
            double tempHealth=(double)h,moves=(double)k,county=0;
            // while(tempHealth>0 && moves>0){
            //     tempHealth-=y1;
            //     county++;
            //     moves--;
            // }
            // if(tempHealth>0){
            //     while(tempHealth>0){
            //         tempHealth-=y2;
            //         county++;
            //     }
            // }
            double y1Moves=moves*y1;
            if((y1Moves)>=tempHealth) county=Math.ceil(tempHealth/(double)(y1));
            else{
                county=moves;
                tempHealth-=(y1Moves);
                double part2=Math.ceil(tempHealth/(double)y2);
                county+=part2;
            }
            if(countx<county) sout((int)countx);
            else sout((int)county);
        }
    }
}

// first i tried to use looping method which ofcourse gave me TLE so i tried to implement it by brute force
// where we straight away find damage that would be dealt by x weapon by dividing it by x to health
// else for second weapon we calculate it in 2 steps 
// 1 in condition where y1 itself able to drop health to 0 in k moves so we simple need to print health/y1
// 2 in condition where it need y2 help as well where we remove the helath remaining from previous k moves
// and then divided to get y2 moves and add it to y weapon moves and at last we compare both of them 
// that whosoever is less we print them