// read multiple console inputs and print the sum to the console
import java.util.Scanner;

public class Input03 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter numbers (space-separated) Type Ctrl + D to end:  ");
        int sum = 0;
        while (scanner.hasNextInt()) {
            int num = scanner.nextInt();
            sum += num;
        }
        System.out.println("Sum: " + sum);
        scanner.close();
    }
}