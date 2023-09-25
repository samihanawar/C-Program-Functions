#include <stdio.h>
 int prime_between_interval( int j);
 int prime_between_interval( int j)
{
    int i, flag=1;
for(i=2;i<j;i++)
    {
    if(j%i==0)

    {flag=0;
    break;}
    }
    return flag;
}

main(){
 int lower, upper,j,flag;
    printf("Enter lower bound of the interval: ");
    scanf("%d", &lower);
    printf("Enter upper bound of the interval: ");
    scanf("%d", &upper);
    //for(j=lower;j<=upper;j++)
    //i=prime_between_interval(i,j);
    printf("Prime numbers between %d and %d are: \n",lower, upper);
    for(j=lower;j<=upper;j++)
   {
    flag=prime_between_interval(j);
    if(flag==1)
    {printf("%d ", j);}
   }
    return 0;
}
