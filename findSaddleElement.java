 import java.util.*;
public class Main
{  
	public static void main(String[] args) {
	   int small=0,f=0;
    Scanner sc=new Scanner(System.in);
    System.out.println("Input a number of rows and columns:");
     int rows = sc.nextInt();
      int col = sc.nextInt();
      int [][]mat= new int[rows][col];   
     System.out.println("Input elements:");
     for(int i=0;i<rows;i++)
     {
         for(int j=0;j<col;j++)
         {
             mat[i][j]=sc.nextInt();
         }
     }
      boolean found =false;
      for(int k=0; k<rows;k++)
      {
          small=mat[k][0];
         int m=0;
         for(int j=1;j<col;j++)
         {
            if(mat[k][j]<small)
             {
                 small=mat[k][j];
                 m=j;
             }
     	}
         boolean isSaddle = true;
     	 for( int i=0;i<rows;i++)
         {
            if(mat[i][m]>small)
            {
                isSaddle=false;
              break;
            }
        }
        if (isSaddle==true) {
            System.out.println("Saddle element is: " + small);
            found = true;
            break;
      
       
      }   
      }
     
        if(found==false) {
            System.out.println("There is no Saddle element");
        }
        
        sc.close();
}
}

 
