     #include <stdio.h>
 #include<string.h>
enum months { January,Februry,March,April,May,June,July,August,September,October,November,December};
 struct t_months{
    
    enum months mon;
    char weather[10];
};

int main() {
    
    struct t_months month;
 
    printf("input a month and weather:\n");
   scanf("%d%[^\n]",&month.mon,&month.weather);
        
    printf("The month is %d of this year, and the weather is: %s\n", month.mon,month.weather);
 
    return 0;
}