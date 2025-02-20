/*Write a program to display the pattern 
  1 2 3 4 5
  2 2 3 4 5
  3 3 3 4 5
  4 4 4 4 5
  5 5 5 5 5 */
  
import java.util.*;
class Pattern{
	public static void main(String []st)
	{
	  Scanner sc = new Scanner(System.in);
	  System.out.println("How many lines you want:");
	  int n=sc.nextInt();
	  for(int i=1;i<=n;i++)
	  {
	    for(int j=1;j<=n;j++)
	    { 
	     if(j<i)
	      System.out.print(i +" ");
	      else
	      System.out.print(j +" ");
	     }
	     System.out.println(" ");
	     }
	  }
}
