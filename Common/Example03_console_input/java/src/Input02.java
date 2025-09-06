// read 2 console inputs and print concatenated text to the console
import java.util.Scanner;

public class Input02 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter 2 text: ");
        String input1 = scanner.next();
        String input2 = scanner.next();
        System.out.println("You entered: " + input1 + input2);
        scanner.close();
    }
}