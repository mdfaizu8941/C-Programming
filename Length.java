import java.util.Scanner;

public class StringLengthExample {
    // User-defined function to find string length
    public static int findLength(String str) {
        int length = 0;
        
        // Loop until the end of the string
        for (char ch : str.toCharArray()) {
            length++;
        }
        
        return length;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Taking input from user
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        
        // Calling user-defined function
        int length = findLength(input);
        
        // Printing the length
        System.out.println("Length of the string: " + length);
        
        scanner.close();
    }
}
