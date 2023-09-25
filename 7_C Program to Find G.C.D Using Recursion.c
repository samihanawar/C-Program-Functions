#include<stdio.h>
int gcd(int n1, int n2);
int gcd(int n1, int n2)
{
    if (n1==0)
    {
        return n2;
    }
    else if (n2==0)
    {
        return n1;
    }
    else if (n1>n2)
    {
        return gcd(n1%n2, n2);
    }
    else
    {
        return gcd(n2, n2%n1);
    }
}

main(){
    int n1,n2,gdcc;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("\nEnter the second number: ");
    scanf("%d",&n2);
    gdcc=gcd( n1,  n2);
    printf("\nThe G.D.C. is %d\n", gdcc);

}
