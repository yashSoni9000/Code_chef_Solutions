public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int a = scanner.nextInt();
            // Your code goes here
            if (a % 2 == 0 && a % 7 == 0) System.out.println("Alice");
            else if (a % 2 == 1 && a % 9 == 0) System.out.println("Bob");
            else System.out.println("Charlie");
        }
    }
}

// we need to fulfill condition that if number is even and mulitple of 7, i.e. divisible by 7 then it is taken by Alice
// else if odd and divisible by 9 then taken by bob else number is taken by charlie