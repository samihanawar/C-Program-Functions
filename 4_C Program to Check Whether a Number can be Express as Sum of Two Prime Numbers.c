#include<stdio.h>
int prime(int n);
int prime(int n)
{
    int i,prime;
    prime=1;
    if(n==0|| n==1)
    {
        prime=0;
    }
    else
    {
        for (i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
        }
    }
    return prime;
}
main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i=2;i<=n/2;i++)
    {
        if(prime(i)==1)
        {
        if(prime(n-i)==1)
        {
            printf("\nyes\n");
            return 0;
        }
        }
    }
   printf("\nno\n");
}
