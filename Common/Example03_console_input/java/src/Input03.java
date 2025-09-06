// read multiple console inputs and print the sum to the console
import java.util.Scanner;

public class Input03 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter numbers (space-separated):  ");
        int sum = 0;
        String line = scanner.nextLine();
        String[] numbers = line.split(" ");
        for (String numStr : numbers) {
            try {
                int num = Integer.parseInt(numStr);
                sum += num;
            } catch (NumberFormatException e) {
                // Ignore invalid numbers
            }
        }
        System.out.println("Sum: " + sum);
        scanner.close();
    }
}