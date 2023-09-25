#include<stdio.h>
#include<math.h>
float root_func(float number1, float number2, float number3);
float root_func(float number1, float number2, float number3)
{
    float z,same_roots,root1,root2;
    z=number2*number2-(4*number1*number3);
    if(z<0)
    {
       printf("\nThe roots are imaginary.\n");
    }
    else if(z==0)
    {
        same_roots=((-number2)/(2*number1));
        printf("The roots are same and they are %f ", same_roots);
    }
    else if(z>0)
    {
    root1=(-number2 + sqrt(z))/(2*number1);
    root2=(-number2 - sqrt(z))/(2*number1);
    printf ("The roots are %f and %f", root1,root2);
    }
}
main(){
    float number1,number2,number3,root_1,z,root_2;
    printf("Enter the numbers: ");
    scanf("%f %f %f",&number1, &number2 ,&number3);
    root_func(number1,number2,number3);
    return 0;
}
