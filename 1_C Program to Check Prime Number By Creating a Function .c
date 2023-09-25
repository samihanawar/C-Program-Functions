#include<stdio.h>
int prime_func(int number);
int prime_func(int number)
{
   int i;
   for(i=2;i<number;i++)
   {
       if(number%i!=0)

        continue;

        else

        return 1;
   }

        return 0;
   }

main (){
    int number,prime_detector= 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    prime_detector= prime_func(number);
    if(prime_detector==1)
    {

        printf("\nThe number %d is not a Prime number.\n",number );
    }
    else
    {
        printf("\nThe number %d is a Prime number.\n",number);
    }

return 0;
}
