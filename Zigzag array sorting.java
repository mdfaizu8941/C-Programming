
import java.util.*;
class Program
{ 
    public static void main(String[] args) {
        
    
    Scanner sc=new Scanner(System.in);
    System.out.println("Input limit:");
    int n =sc.nextInt();
    int []arr = new int [n];
    System.out.println("Input elements");
     for(int i=0; i < n; i++)
     {
        arr[i]=sc.nextInt();
     }
     Arrays.sort(arr);
    System.out.println("Sorted array:");
    for(int i=0; i < n; i++)
    {
    System.out.print(" ");
        System.out.print(arr[i]);
    }
      
         for(int i=1;i<n-1;i=i+2)
         {        
                int temp=arr[i];
                  arr[i]=arr[i+1];
                  arr[i+1]=temp;
         }
     
     System.out.println("\nZigzag array is:");
     for(int i=0;i<n;i++)
    {
         System.out.print(" ");
          System.out.print(arr[i]);
    }
     
}
}
