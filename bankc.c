     #include<stdio.h>
  #include<stdlib.h>
 #include<string.h>
 struct customer {
     char nm[90];
     char type[90];
     float bal;
 };
 int main()
 {
     struct customer cust;
     int ch,choice,d,w,b;
     
     printf("Enter a name:\n");
     scanf("%s",cust.nm);
     printf("type of account:\n");
     scanf("%s",cust.type);
     printf("Enter yoyr balance:");
     scanf("%f",&cust.bal);
 
     do{
          
         printf("1.press 1 for deposite:\n");
          printf("2.press 2 for withrawl\n");
           printf("3.press 3 for check balance\n");
            printf("4.press 4 for exit\n");
            
     printf("what do you want to do ? enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
         printf("enter how much amount you want to deposite\n");
         scanf("%d",&d);
         cust.bal+=d;
         printf("Deposite successfully:\n");
         
         break;
         
         case 2:
         printf("enter how much amount you want to withdrawl\n");
         scanf("%d",&w);
         if(cust.bal<w)
         {
             printf("Insufficient balnace\n");
         }
         else{
          cust.bal-=w;
        printf("withdrwal successfully:\n");
         }
         
         break;
         
         case 3:
          printf("The account holder is %s\n",cust.nm);
     printf("Account type is: %s\n",cust.type);
     printf("Total balance is: %f\n",cust.bal);
     break;
         
         case 4:
          exit(1);
         break;
         default:
         printf("wrong choice");
         
    }
    printf("If you eant to contineu then press 1 otherwise press 2:\n");
    scanf("%d",&ch);
     }
     while(ch==1);
     return 0;
 }
 