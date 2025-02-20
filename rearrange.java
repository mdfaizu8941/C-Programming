//The problem to rearrange positive and negetive numbers in an array.
import java.util.*;
class Rearrange
{
    //used selectoin sort for this problem
	public static void selection(int []arr,int n)
	{
	  for(int i=0;i<n;i++)
	  { 
	   int min = i;
	   for(int j = i+1;j<n;j++)
	   {
	    if(arr[min]>arr[j])
	      min=j;
	    }
	   if(min!=i)
	   {
	    int temp=arr[i];
	    arr[i]=arr[min];
	    arr[min]=temp;
	    }
	   
	  }
	}

	 
	public static void main(String []st)
	{  
	 Scanner sc= new Scanner(System.in);
	 //input limits
	 System.out.println("Input limits:");
	 int n = sc.nextInt();
	  int []arr=new int[n];
	  //Input elements
	  System.out.println("Input elements: ");
	  for(int i=0;i<n;i++)
	    arr[i]=sc.nextInt();
	   
	  selection(arr,n);
	   System.out.println("Rearranged array is: ");
	  for(int i=0;i<n;i++)
	  {
	   System.out.print(" ");
	    System.out.print(arr[i]);
	    }
	     System.out.println(" ");
	  sc.close();
	  }
}
	   
	     
	 
	 
	 
      
    
