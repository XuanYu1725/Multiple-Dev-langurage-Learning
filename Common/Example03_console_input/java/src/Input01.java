// read console input and print it to the console
import java.util.Scanner;

public class Input01 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter some text: ");
        String input = scanner.next();
        System.out.println("You entered: " + input);
        scanner.close();
    }
}