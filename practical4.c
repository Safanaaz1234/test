// Program to display * pattern using for loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,j;
     printf("Enter the number :");
     scanf("%d",&n);
     for ( i = n; i >= 1; i--)
     {
         for ( j = 1; j <=i; j++)
         {
             printf("*");
         }
         printf("\n");
     }
     
getch();
return 0;
}