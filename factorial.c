#include <stdio.h>
int main()
{
    int n,x=1,num;
    printf("\nEnter the number whose factorial you want to print:");
    scanf("%d",&num);
    for (n=1;n<=num;n++)
    {
        x*=n;
    }
    printf("\nFactorial of %d is %d.\n\n",num,x);
    return 0;
}