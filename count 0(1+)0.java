 import java.util.Scanner;

public class Main {
     
    public static int findLength(String str) {
        int count = -1;
        
  
        for (int i=0;i<str.length();i++) {
             if(str.charAt(i)=='0')
             {
                 
                  for (int j=i+1;i<str.length();i++)
                  {
                      if(str.charAt(i)=='1')
                         continue;
                      else {
                       count++;
                       break;
                       }
                  }
             }
        }
        
        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
    
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        
       
        int count = findLength(input);
           
        System.out.println("Pattern 0(1+)0:" + count);
        
        scanner.close();
    }
}
