// read all characters from a single line of console input and print them to the console
import java.util.Scanner;

public class Input04 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a line of text: ");
        String input = scanner.nextLine();
        System.out.println("You entered: " + input);
        scanner.close();
    }
}