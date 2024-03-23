public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int temp;
        for (int i = 0; i < n; i++) {
            temp = sc.nextInt();
            if (map.containsKey(temp)) {
                map.put(temp, map.get(temp) + 1);
            } else {
                map.put(temp, 1);
            }
        }
        int maxi = Integer.MIN_VALUE;
        boolean ans = true;
        for (Map.Entry < Integer, Integer > entry: map.entrySet()) {
            int freq = entry.getValue();
            if (freq > maxi) {
                maxi = freq;
                ans = true;
            } else if (freq == maxi) ans = false;
        }
        System.out.println(ans ? "YES" : "NO");
    }
}

// i inserted the freq of each element in a map and check if max freq element appears again or not , if freq is again 
// equal to max freq then ans is set to false but if freq greater again arrives it set ans to true and max= new max freq