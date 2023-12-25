

// Pattern 1: sum= x+2x+3x+4x + .......+nx
/*#include <stdio.h>
int main()
{
    int i,x,n,sum=0;
    printf("\n\nEnter the number of terms\nfor which you want to find sum\nof the following pattern.\n");
    printf("\nPattern: x + 2x + 3x + .......+ nx.\n\n");
    scanf("%d",&n);
    printf("\nEnter the value of x to insert in the above mentioned pattern.\n\n");
    scanf("%d",&x);
    for (i=1; i<=n ; i++)
    {
        sum+=x*i;
    }
    printf("\n%d is the sum.\n\n",sum);
    return 0;
}*/

//Pattern 2: sum = 1! + 2! + 3! + .........+ n!
/*
#include <stdio.h>
int main()
{
    int i,n,sum=0,ini=1;
    printf("\n\nEnter the number of terms\nfor which you want to find sum\nof the following pattern.\n");
    printf("\nPattern: 1! + 2! + 3! + .......+ n!.\n\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        ini*=i;
        sum+=ini;
    }
    printf("\n%d is the total sum.\n\n",sum);
    return 0;
}*/

//Pattern 3:x/1 - x/2 + x/3 + .......+ x/n
/*
#include <stdio.h>
int main()
{
    int i,n;
    float x,sum=0;
    printf("\n\nEnter the number of terms\nfor which you want to find sum\nof the following pattern.\n");
    printf("\nPattern: x/1 - x/2 + x/3 + .......+ x/n.\n\n");
    scanf("%d",&n);
    printf("\nEnter the value of x to insert in the above mentioned pattern.\n\n");
    scanf("%f",&x);
    for (i=1;i<=n;i++)
    {
        if (i%2==1)
            sum+=(x/i);
        else 
            sum+= -(x/i);
    }
    printf("\n\nTotal sum is %.2f.\n\n",sum);
    return 0;

}*/


//Pattern 4: x - x^2 + x^3 + .......+ x^n.
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    float x,sum=0;
    printf("\n\nEnter the number of terms\nfor which you want to find sum\nof the following pattern.\n");
    printf("\nPattern: x - x^2 + x^3 + .......+ x^n.\n\n");
    scanf("%d",&n);
    printf("\nEnter the value of x to insert in the above mentioned pattern.\n\n");
    scanf("%f",&x);
    for (i=1;i<=n;i++)
    {
        if (i%2==1)
            sum+=pow(x,i);
        else 
            sum+= -pow(x,i);
    }
    printf("\n\nTotal sum is %.2f.\n\n",sum);
    return 0;

}*/



// 5.Quadratic equation and its roots determination.

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,D,r1,r2;
    printf("\n\nEnter the coefficients of a quadratic equation as per the\nstandard form: ax^2 + bx +c=0.\n\n");
    scanf("%f %f %f",&a,&b,&c);
    D=powf(b,2) - 4*a*c;

    if (D>=0)
       {
        r1=(-b + sqrtf(D))/(2*a);
        r2=(-b - sqrtf(D))/(2*a);
        printf("\nThe two roots are %.2f and %.2f.\n\n",r1,r2);
       }
    else if (D<0)
       printf("\nNo real roots for the entered values exist.\n\n");
    return 0;
}