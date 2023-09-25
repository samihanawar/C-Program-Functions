#include<stdio.h>
float recursion(float n);
float recursion(float n)
{
    if(n<=1)
        return n;
     else
        return n*recursion(n-1);
}
 main(){
 float n;
 printf("Enter the range: ");
 scanf("%f", &n);
 printf("\nThe sum is = %f\n", recursion(n));
 return 0;
 }
