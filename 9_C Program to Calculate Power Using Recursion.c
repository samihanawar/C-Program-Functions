#include<stdio.h>
int power_rec( int number, int power);
int power_rec( int number, int power)
{
    if (power==0)
    {
        return 1;
    }
    else
     {
        return (number*power_rec(number, power-1));
    }
}
main(){
 int number,power,result;
 printf ("Enter the number: ");
 scanf("%d", &number);
 printf("Enter the power: ");
 scanf("%d", &power);
 result=power_rec(  number, power);
 printf("The result is: %d", result);
}
