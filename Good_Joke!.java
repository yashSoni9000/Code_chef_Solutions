import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main(String[] args) throws java.lang.Exception
    {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while (t-- > 0) {
            int n,first,second,ans=1;
            n=sc.nextInt();
            for(int i=0;i<n;i++){
                first=sc.nextInt();
                second=sc.nextInt();
            }
            for(int i=2;i<=n;i++) ans^=i;
            System.out.println(ans);
        }
    }
}

// we simply need to XOR numbers from 1 to n and print it, question is tricky in statement we need to check for test cases