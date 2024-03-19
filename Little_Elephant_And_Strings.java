import java.util.*;

class Codechef {
    public static void main(String[] args) {
        int t = 1, k, n;
        String[] a, b;
        String temp;
        boolean ans = false;
        Scanner sc = new Scanner(System.in);

        while (t-- > 0) {
            k = sc.nextInt();
            // sc.nextLine(); // Consume the remaining newline character
            n = sc.nextInt();
            // sc.nextLine(); // Consume the remaining newline character

            a = new String[k];
            b = new String[n];

            for (int i = 0; i < k; i++) {
                a[i] = sc.next();
            }

            for (int i = 0; i < n; i++) {
                b[i] = sc.next();
            }

            for (String demo: b) {
                for (String s: a) {
                    if (demo.contains(s) || demo.length() >= 47) {
                        ans = true;
                        break;
                    }
                }
                if (ans) System.out.println("Good");
                else System.out.println("Bad");
                ans = false;
            }
        }
    }
}

// we need to first store strings in array and then we need to iterate in the given n strings to check if a array string exist
// and also if b array has length greater than 47 than we print good else print bad