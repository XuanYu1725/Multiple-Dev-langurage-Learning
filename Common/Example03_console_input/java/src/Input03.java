// read multiple console inputs and print the sum to the console
import java.util.Scanner;

public class Input03 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter numbers (space-separated):  ");
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int sum = num1 + num2;
        System.out.println("Sum: " + sum);
        scanner.close();
    }
}