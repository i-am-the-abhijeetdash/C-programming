// Q. Take user input as any alphabet and check whether it is a vowel or not.

#include<stdio.h>
int main()
{     
    char alpha;
    printf("\nEnter alphabet to check it is a vowel or not:\n\n");
    scanf(" %c",&alpha);
    switch(alpha)
    {     
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("\n%c is a vowel.\n\n",alpha);
            break;
        default:
            printf("\n%c is not a vowel.\n\n",alpha);
    }
    return 0;
}


// Q.Check a input year for leap year.

/*#include <stdio.h>
int main()
{
    int year;
    printf("\nEnter year name to check leap year or not:");
    scanf("%d",&year);
    if (year%4==0)
        printf("\nYear %d is a leap year.\n\n",year);
    else
        printf("\nYear %d is not a leap year.\n\n",year);
    return 0;
}*/


// Q. Input 3 sides check whether they make an equilateral triangle.

/*#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter 3 sides of a triangle resepctively:");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c)
        printf("\nThe entered sides %d, %d and %d make an equilateral triangle.\n\n",a,b,c);
    else 
        printf("\nThe entered sides %d, %d and %d do not make an equilateral trianlge.\n\n",a,b,c);
    return 0;
}*/

// Q.

/*#include <stdio.h>
int main()
{
    int units,bill;
    printf("\nEnter total no. of  units to calculate your electricity bill:");
    scanf("%d",&units);
    if (units<200)
        printf("\nSince your no. of units lies in the below 200 range.\nYour bill is of zero rupees only.\n\n");
    if (units>200 && units<400)
        {
            bill=units*4;
            printf("\nSince your no. of units lies in 200 to 400 range.\nYou will be charged 4 rupees per unit.\nSo your total bill is: %d rupees.\n\n",bill);
        }
    if (units>400 && units<700)
        {
            bill=units*6;
            printf("\nSince your no. of units lies in 400 to 700 range.\nYou will be charged 6 rupees per unit.\nSo your total bill is: %d rupees.\n\n",bill);
        }
    if (units>700)
        {
            bill=units*8;
            printf("\nSince your no. of units lies in the 700 above range.\nYou will be charged 8 rupees per unit.\nSo your total bill is: %d rupees.\n\n",bill);
        }
    return 0;
}*/

/*
Q. Create a shopping bill by taking spent amount as input from the user
and then print the final bill as per the discounts mentioned below.
 <1000 -> discount 0%
1000-2999 -> discount 10%
 3000-4999 -> discount 20%
 >=5000 -> discount 30%*/

/*#include <stdio.h>
int main()
{
    int amount;
    float discount,final;
    printf("\n\nEnter your shopping amount to determine discount:");
    scanf("%d",&amount);
    if (amount<1000)
        printf("\nYour bill is of %d rupees.\nyou have not availed any discount.\nSince the amount is below 1000 rupees.\n\n",amount);
    if (amount>=1000 && amount<3000)
    {
        final=amount-amount*0.1;
        printf("\nYour bill is of %.2f rupees.\nYou have availed 10 %% discount.\nSince the amount lies in the range of 1000 and above till 2999 rupees.\n\n",final);
    }

    if (amount>=3000 && amount<4999)
    {
        final=amount-amount*0.2;
       printf("\nYour bill is of %.2f rupees.\nYou have availed 20 %% discount.\nSince the amount lies in the range of 3000 and above till 4999 rupees.\n\n",final);
    }

    if (amount>=5000)
    {
        final=amount-amount*0.3;
        printf("\nYour bill is of %.2f rupees.\nYou have availed 30 %% discount.\nSince the amount lies in the range of 5000 and above rupees.\n\n",final);
    }
    return 0;
       
}*/