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
                int oldFrequency = map.get(temp);
                map.put(temp, oldFrequency + 1);
            }
            else {
                map.put(temp, 1);
            }
        }
        int maxFreq = Integer.MIN_VALUE, value = Integer.MAX_VALUE;
        for (int key: map.keySet()) {
            int frequency = map.get(key);
            if (frequency > maxFreq) {
                maxFreq = frequency;
                value = key;
            }
            else if (frequency == maxFreq) {
                if (key < value) {
                    value = key;
                }
            }
        }
        sout(value + " " + maxFreq);
    }
}

// we put the given number in freq map and check if current key has greater freq than max freq we directly assign max freq
// value to our final value else if both are equal we have to check if the key is less than value , we assing min value 
// among key and given existing value