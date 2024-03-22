public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        n = sc.nextInt();
        boolean ans = true; // Reset ans to true for each test case
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[j]-a[i]==a[k]-a[j]){
                        ans=false;
                        break;
                    }
                }
            }
        }
        System.out.println(ans?"YES":"NO");
    }
}

// we need to use brute force to solve this problem, i tried different approach of using map as well but it was failing
// in non consecutive triplets for AP series therefore we have to use O(n^3) approach