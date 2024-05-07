 #include<stdio.h>
#include<string.h>
 struct car{
    int carId;
    int model;
    float rentalRate;
};
int main()
{
    int i,n,days;
    float totalCost;
    printf("\t\t\t\tOUTPUT\t\n");
    printf("\t\t\t*********INPUT********\n");
    printf("Enter a total number of car:\n");
    scanf("%d",&n);
    struct car c[n];
    for(i=0;i<n;i++)
    {
     printf("\nEnter details for Car %d:\n", i + 1);
     printf("\nCar ID:");
     scanf("%d",&c[i].carId);
     printf("\nModel Number:");
     scanf("%d",&c[i].model);
     printf("\nRent cost per day:");
     scanf("%f",&c[i].rentalRate);
    }
    printf("Enter a number of days of rental:\n");
    scanf("%d",&days);
    printf("\t\t\t*********OUTPUT********\n");
    for(i=0;i<n;i++)
    {
        totalCost+=c[i].rentalRate*days;
    }
    printf("\nTotal rental cost for %d days for %d cars is: %f\n", days,n,totalCost);
return 0;
}
