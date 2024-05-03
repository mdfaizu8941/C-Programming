   #include<stdio.h>
  #include<stdlib.h>
 #include<string.h>
 struct customer {
     char nm[90];
     char type[90];
     float bal;
 }cus;
 void depo(struct customer ,int);
 void with(struct customer ,int);
 void balance(struct customer ,int);
 int main()
 {
     struct customer cust;
     int choice,ch,d,w,b;
     printf("input: name, acc type, balance\n");
     scanf("%s%s%f",cust.nm,cust.type,&cust.bal);
 
     do{
          
         printf("1.press 1 for deposite:\n");
          printf("2.press 2 for withrawl\n");
           printf("3.press 3 for balance\n");
            printf("4.press 4 for exit\n");
            
     printf("what do you want to do ? enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
         printf("enter how much amount you want to deposite\n");
         scanf("%d",&d);
         depo(cust,d);
         break;
         
         case 2:
         printf("enter how much amount you want to withdrawl\n");
         scanf("%d",&w);
         with(cust,w);
         break;
         
         case 3:
         printf("if you want to only check your balnace then enter 0:");
         scanf("%d",&b);
         balance(cust,b);
         break;
         
         case 4:
          exit(1);
         break;
         default:
         printf("wrong choice");
         
    }
    printf("do you want to continue if yes then press 1:");
    scanf("%d",&ch);
     }
     while(ch==1);
     return 0;
 }
void depo(struct customer cust,int d)
{   printf("your bank details is here, name:%s,account type: %s\n",cust.nm,cust.type);
    cust.bal+=d;
    printf("you deposite %d amount and total balce is %f\n",d,cust.bal);
}
void with(struct customer cust,int w)
{        printf("your bank details is here, name:%s,account type: %s\n",cust.nm,cust.type);
 cust.bal-=w ;
  printf("you deposite %d amount and total balce is %f\n",w,cust.bal);
 
}
void balance(struct customer cust,int b)

{  
           printf("your bank details is here, name:%s,account type: %s\n",cust.nm,cust.type);
          cust.bal+=b;
     printf("your total balce is %f\n",cust.bal);
}
 