public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            // Your code goes here
            if ((a != b) && (b != c) && (c != a)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}

// we need to print if all 3 sides are distince so we check equality with each of given 3 sides, if all unequal then print yes
// else print no