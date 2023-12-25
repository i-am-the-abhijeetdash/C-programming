//Q.Enter a number and print its table.

/*#include <stdio.h>
int main()
{
    int n,x,prod;
    printf("\nEnter the number whose table you want to see.\n\n");
    scanf("%d",&x);
    for (n=1;n<=10;n++)
     {
        prod=n*x;
        printf("\n%d x %d = %d\n\n",x,n,prod);
     }
    return 0;
}*/








/*Q.Enter starting and ending numbers and then print all those numbers 
divisible by 3 or 5.*/

/*
#include <stdio.h>
int main()
{
    int ini,end,multi;
    printf("Enter two numbers the latter being larger than the former one:\n\n");
    scanf("%d %d",&ini,&end);
    printf("\n");
    for (ini;ini<=end;ini++)
    {
        if (ini%3==0 || ini%5==0)
           printf("\n%d",ini);
    }
    return 0;
}*/






//Enter 10 numbers and find out total number of +ve,-ve and zeroes.

/*#include <stdio.h>
int main()
{
    int num,pos=0,neg=0,zer=0,n;
    printf("Enter 10 numbers to get the number of positive negative and zero in them:\n\n");
    for (n=1;n<=10;n++)
    {
        printf("Enter number %d: ",n);
        scanf("%d",&num);
        if (num>0)
            pos+=1;
        else if (num<0)
            neg+=1;
        else 
            zer+=1;      
    }
    printf("Total +ve numbers are: %d\n\n",pos);
    printf("Total -ve numbers are: %d\n\n",neg);
    printf("Total zeroes are: %d\n\n",zer);
    return 0;
}*/






//Q.Input 10 characters and determine the number of upper and lower case characters.
// 65 to 90: A to Z
//97 to 122: a to z

/*#include <stdio.h>
int main()
{
    int n,upper=0,lower=0;
    char alpha;
    printf("Enter 10 characters one by one to \ndetermine number of upper case and lower case characters entered.\n\n");
    for (n=1;n<=10;n++)
    {
        printf("\nEnter character no. %d:",n);
        scanf("%c",&alpha);
        fflush(stdin);// to remove any spaces entered in the input
        if (alpha>=65 && alpha<=90)
              upper+=1;
        else if (alpha>=97 && alpha<=122)
              lower+=1;
    }
    printf("\n\nTotal number of uppercase characters are:%d\n\n",upper);
    printf("\nTotal number of lowercase characters are:%d\n\n",lower);
    return 0;
}*/





//To determine factors of a number.

/*#include <stdio.h>
int main()
{
    int x,factor,n;
    printf("\nEnter a number to determine its factors.");
    scanf("%d",&x);
    printf("\n1 is a factor of %d.\n",x);
    for (n=2;n<=x;n++)
    {
        if (x%n==0)
            printf("\n%d is also a factor of %d.\n",n,x);
    }
    return 0;
}*/





//To find product of two numbers without using multiplication sign.

/*#include <stdio.h>
int main()
{
    int x1,x2,n,sum=0;
    printf("\nEnter two numbers respectively to get their\nproduct without multiplicatipn symbol being used.\n\n");
    scanf("%d %d",&x1,&x2);
    for (n=1;n<=x1;n++)
    {
        sum+=x2;
    }
    printf("\nThe product of %d and %d is %d.\n\n",x1,x2,sum);
    return 0;
}*/







//Whether a given number is prime or composite or co-prime.

/*#include <stdio.h>
int main()
{
    int num,n,x=0;
    printf("\nEnter number to check it is prime or not:");
    scanf("%d",&num);
    for (n=2;n<num;n++)
       {
         if (num%n==0)
            x+=1;
       }
    if (num==1)
          printf("\n%d is known as co-prime number.\n\n",num);
    else if (x==0 && num!=1)
       printf("\n%d is a prime number.\n\n",num);
    else
       printf("\n%d is a composite number.\n\n",num);
    return 0;
}*/










// Find out LCM of two numbers.

/*#include <stdio.h>
int main()
{
    int num1,num2,n,prod;
    printf("\nEnter two numbers to find their LCM:");
    scanf("%d %d",&num1,&num2);
    prod=num1*num2;
    for (n=1;n<=prod;n++)
        {
            if (n%num1==0 && n%num2==0)
                {
                    printf("\n%d is the LCM of %d and %d.\n\n",n,num1,num2);
                    break;
                }
        }
    return 0;
}*/







// Check whether the input is a perfect number or not.
// Perfect number: Sum of the factors excluding the number should equate to itself.
// the number is not included in its factors while checking for perfect number.


/*#include <stdio.h>
int main()
{
    int num,sum=0,n;
    printf("\nEnter a number to determine if it is a perfect number:");
    scanf("%d",&num);
    for (n=1;n<num;n++)
        {
            if (num%n==0)
                sum+=n;
        }
    if (sum==num)
        printf("\n%d is a perfect number.\n\n",num);
    else 
        printf("\n%d is not a perfect number.\n\n",num);
    return 0;
}*/







//To print perfect numbers in a range.


/*#include <stdio.h>
int main()
{
    int num1,num2,sum,n,k;
    printf("\nEnter two numbers to determine perfect numbers between them:\n\n");
    scanf("%d %d",&num1,&num2);
    for (n=num1;n<=num2;n++)
        {
            sum=0;
            for (k=1;k<n;k++)
            {
                if (n%k==0)
                    sum+=k;
            }
            if (sum==n)
               printf("\n%d",n);
        }
    return 0;
}*/








// To print prime numbers in a range.

/*#include <stdio.h>
int main()
{
    int num1,num2,x,n,k,c=0,l=1;
    printf("\nEnter two numbers to determine prime numbers between them:\n\n");
    scanf("%d %d",&num1,&num2);
    for (n=num1;n<=num2;n++)
        {
            if (n==1)
               continue;
            x=0;
            for (k=2;k<n;k++)
            {
                if (n%k==0)
                    x+=1;
            }
            if (x==0)
               {
                if (l==1)
                   printf("\nPrime numbers in the mentioned range of %d to %d is/are:\n",num1,num2);
                printf("\n%d",n);
                 c+=1;
                 l+=1;
               }
        }
    if (c==0)
        printf("\nNo prime numbers exist in the given range of %d and %d.\n\n",num1,num2);
    return 0;
}*/







// Fibonacci sequence  0 1 1 2 3 5 8 13....

//Logic 1:

/*#include <stdio.h>
int main()
{
    int n,res=1,sum=0,term;
    printf("\nEnter the number of terms you want to print of the fibonacci sequence from the starting:\n\n");
    scanf("%d",&term);
    printf("\n");
    printf("Numbers in the sequence are:\n");
    printf("0\n");
    for (n=0;n<=(term-2);n++)
    {
        sum+=res;
        res=sum-res;
        printf("%d\n",sum);
    }
    printf("\n");
    return 0;
}*/

//Logic 2:

/*#include<stdio.h>
int main()
{
    int n1,k,result=1,sum1=0;
    printf("\nEnter the number of terms you want to print of the fibonacci sequence: ");
    scanf("%d",&n1);
    printf("\n0\n1");
    for (k=0;k<=(n1-1);k++)
    {
        sum1=sum1+result;
        result=result+sum1;
        printf("\n%d",sum1);
    }
    return 0;
}*/







// To determine the number of digits in a number.

//Logic 1:

/*#include<stdio.h>
int main()
{
    int n,c=0;
    long long int num,k,new;
    k=10;
    printf("\nEnter number to check its number of digits:");
    scanf("%lld",&num);
    for (n=0;;n++)
      {
        new=num%k;
        k=k*10;
        c+=1;
        if (new==num)
            break;
      }
    printf("\n%d is the number of digits in %lld.\n\n",c,num);
    return 0;
}*/

//Logic 2:

/*#include<stdio.h>
int main()
{
    long long int num,n;
    int k=0;
    printf("\nEnter number to check its number of digits: ");
    scanf("%lld",&num);
    for (n=num;n>0;n/=10)
    {
        k+=1;
    }
    printf("%d",k);
    return 0;
}*/









//Q. Print strong numbers.

//145=1! + 4! + 5! =1 + 24 + 120=145

/*#include<stdio.h>
int main()
{
    int num,c,b,prod,sum=0,alt;
    printf("\nEnter number to check for strong number:");
    scanf("%d",&num);
    alt=num;
    for(b=num;b>0;b/=10)
    {
        c=num%10;
        num=num/10;
        prod=1;
        for (c;c>=1;c--)
        {
            prod=prod*c;
        }
        sum+=prod;
    }
    if (sum==alt)
      printf("\n%d is a strong number.\n\n",alt);
    else
       printf("\n%d is not a strong number.\n\n",alt);
    return 0;
}*/










//Q. To print strong numbers in a range.

/*#include<stdio.h>
int main()
{
    int c,b,prod,sum,alt,n,start,end,k;
    printf("\nEnter start and end of a increasing range: ");
    scanf("%d %d",&start,&end);
    for (k=start;k<=end;k++)
    {
        n=k;
        alt=n;
        sum=0;
        for(b=n;b>0;b/=10)
        {
            c=n%10;
            n=n/10;
            prod=1;
            for (c;c>=1;c--)
            {
                prod=prod*c;
            }
            sum+=prod;
        }
        if (sum==alt)
            printf("\n%d\n",sum);
    }
    return 0;
}*/




//To print patterns using nested for loop.



/*5
  54
  543
  5432
  54321
*/



/*#include<stdio.h>
int main()
{
    int a,b;
    printf("\n");
    for (a=5;a>=1;a--)
    {
        for (b=5;b>=a;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}*/



//------------------------------------------------------------------------



/*  12345
    1234
    123
    12
    1
*/


/*#include<stdio.h>
int main()
{
    int a,b;
    printf("\n");
    for (a=5;a>=1;a--)
    {
        for (b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}*/



//----------------------------------------------------------------



/*5
  44
  333
  2222
  11111*/


/*#include<stdio.h>
int main()
{
    int a,b,c=5;
    printf("\n");
    for (a=5;a>=1;a--)
    {
        for (b=5;b>=a;b--)
        {
            printf("%d",c);
        }
        c=c-1;
        printf("\n");
    }
    printf("\n");
    return 0;
}*/



//--------------------------------------------------------------------



/*  55555
    4444
    333
    22
    1
*/


/*#include<stdio.h>
int main()
{
    int a,b,c=5;
    printf("\n");
    for (a=5;a>=1;a--)
    {
        for (b=1;b<=a;b++)
        {
            printf("%d",c);
        }
        c=c-1;
        printf("\n");
    }
    printf("\n");
    return 0;
}
*/



//------------------------------------------------------------------



/*1 
  2 3 
  4 5 6 
  7 8 9 10
*/


/*#include<stdio.h>
int main()
{
    int a,b,c=1;
    printf("\n");
    for (a=4;a>=1;a--)
    {
        for (b=4;b>=a;b--)
        {
            printf("%d ",c);
            c+=1;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}*/

//To print number in reverse order using for loop.

//Logic 1: (okayish)


/*#include<stdio.h>
int main()
{
    long long int num,c=0,n,alt,k,new=0,j=1,h,g;
    printf("\nEnter number to print it in reverse: ");
    scanf("%lld",&num);
    alt=num;
    for (n=num;n>0;n/=10)
    {
        c+=1;
    }
    for (k=c;k>1;k--)
    {
        j=j*10;
    }


    for (h=num;h>0;h/=10)
    {
        g=num%10;
        num=num/10;
        new+=g*j;
        j=j/10;
    }
    printf("\n\n%lld in reverese order is:%lld.\n\n",alt,new);
    return 0;
}*/


//logic 2 (better)


/*#include<stdio.h>
int main()
{
    long long int  temp,num,reverse=0,remainder,c=0,n,alt;
    printf("\nEnter number to print it in reverse: ");
    scanf("%lld",&num);
    alt=num;
    for (n=num;n>0;n/=10)
    {
        c+=1;
    }
    for (int i = 0; i < c; i++)
    {
        temp = num;
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("\n\n%lld in reverese order is: %lld.\n\n",alt,reverse);
    return 0;
}*/

//-------------------------------------------------


//To print a hollow box with input no of rows.

/*#include<stdio.h>
int main()
{
    long int n,num,p;
    printf("\n\nEnter the number of row you want:");
    scanf("%lld",&num);
    printf("\n\n");
    for (n=1;n<=num;n++)
    {
        for (p=1;p<=num;p++)
        {

            if (n==1 || p==1 || n==num || p==num)
               printf("* ");
            else
               printf("  ");           
        }
        printf("\n");
    }
    return 0;
}*/



//---------------------------------------------




//To print diagonals of a box with input no of rows.

/*#include<stdio.h>
int main()
{
    long int n,num,p,sum;
    printf("\n\nEnter the number of rows you want:");
    scanf("%ld",&num);
    printf("\n\n");
    sum=num+1;
    for (n=1;n<=num;n++)
    {
        for (p=1;p<=num;p++)
        {
            if ((n==p) || (n+p)==sum)
               printf("* ");
            else
               printf("  ");
        }
        printf("\n");
    }
    return 0;
}*/


/*

1234554321
1234  4321
123    321
12      21
1        1

*/

/*#include<stdio.h>
int main()
{
    int a,b,k=5,g,m,p=0;
    for (a=1;a<=5;a++)
    {
        for (b=1;b<=k;b++)
        {
            printf("%d",b);
        }
        for (m=0;m<p;m++)
        {
            printf(" ");
        }
        p+=2;
        g=k;
        for (g;g>=1;g--)
        {
            printf("%d",g);
        }
        k=k-1;
        printf("\n");

    }
    return 0;
}*/


/*

1        1
12      21
123    321
1234  4321
1234554321

*/


/*#include<stdio.h>
int main()
{
    int a,b,k=1,g,m,p=8;
    for (a=1;a<=5;a++)
    {
        for (g=1;g<=k;g++)
        {
            printf("%d",g);
        }
        
        for (m=p;m>0;m--)
        {
            printf(" ");
        }
        p-=2;

        for (b=k;b>=1;b--)
        {
            printf("%d",b);
        }
        k=k+1;
        
        printf("\n");

    }
    return 0;
}*/


//------------------------------------------------------



/*

    *
   * *
  * * * 
 * * * *
* * * * *
 
 */

/*#include<stdio.h>
int main()
{
    int a,b,n=5;

    for (a=1;a<=n;a++)
    {
        for (b=1;b<=n-a;b++)
        {
            printf(" ");
        }
        for (b=1;b<=2*a-1;b+=2)
        {
            if (b>=1 && b<=2*a-1)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/



//-------------------------------------------------------


/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/


/*#include<stdio.h>
int main()
{
    int n,h;
    for (n=1;n<=5;n++)
    {
        for (h=1;h<=n;h++)
        {
            if (n%2!=0)
            {
                if (h%2!=0)
                   printf("1  ");
                else 
                   printf("0  ");
            }

            else if(n%2==0)
            {
                if (h%2==0)
                   printf("1  ");
                else
                   printf("0  ");
            } 
                
        }   
        printf("\n");
    }
}
*/



/*------------------------------------------------------*/
// WHILE LOOP


/*
            SYNTAX:


            Intialization;
            while (condition)
            {
                -------------------------
                -----------------------
                -------------------

                increment or decrement (say a++ or a--);
                (or else the loop becomes susceptible to infinite loop error or
                any other logical error.)
            }

*/


/*--------------------------------------------------------*/
// DO WHILE LOOP

/*
            SYNTAX:

            do
            {
                -------------------------
                -------------------------
                -------------------------
                increment/decrement;

            }while(condition );

*/


//Q. To print a number in reverse, sum of its digits and number of digits
//using while loop.

/*#include<stdio.h>
int main()
{
    int num,rev=0,sum=0,c=0,n,alt;
    printf("\n\nEnter 1-to print reverse of the number.\n\nEnter 2-to print sum of the digits of the number.\n\nEnter 3-to print number of digits of the number.\n\n");
    scanf("%d",&n);
    printf("\nEnter the number you want to perform the selected operation on: ");
    scanf("%d",&num);
    alt=num;
    while (num>0)  // Yahaan pe agar num/=10 de denge aur andar
    // division condition nahi denge toh yeh infinite loop ban jayega,
    // kyunki is line me sirf condition check ho rahi hai na ki num ki 
    //value change ho rahi hai.
    {
        rev=rev*10 + num%10;
        c+=1;
        sum+=num%10;
        num/=10;
    }
    if (n==1)
        printf("\n%d is the  reverse of %d.\n\n",rev,alt);
    else if(n==2)
        printf("\n%d is the  sum of the digits of %d.\n\n",sum,alt);
    else if(n==3)
        printf("\n%d is the  number of digits in %d.\n\n",c,alt);
    return 0;
}*/


//Q. To check if a number is palindrome number or not.

/*#include<stdio.h>
int main()
{
    int rev=0,num,alt;
    printf("\n\nEnter number to check if its a palindrome number or not:");
    scanf("%d",&num);
    alt=num;
    while (num>0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    if (rev==alt)
       printf("\n%d is a palindrome number.\n\n",alt);
    else 
       printf("\n%d is not a palindrome number.\n\n",alt);
    return 0;
}*/


//------------------------------------------------------



// To check if a 3 digit number is an armstrong number.

/*#include<stdio.h>
int main()
{
    int strong=0,num,alt,c;
    printf("\nEnter a 3 digit number to check if its a armstrong number or not:");
    scanf("%d",&num);
    alt=num;
    while (num>0)
    {
        c=num%10;
        strong=strong + c*c*c;
        num/=10;
    }
    if (strong==alt)
       printf("\n\n%d is an armstrong number.\n",strong);
    return 0;

}*/



//------------------------------------------------------



//To check any number for armstrong number.


/*#include<stdio.h>
int main()
{
    int num,c,n,strong=0,alt,k,h;
    printf("\nEnter a number to check if its armstrong or not:");
    scanf("%d",&num);
    alt=num;
    h=num;
    while (h>0)
    {
        c=h%10;
        n=1;
        k=num;
        while (k>0)
        {
            k=k/10;
            n=n*c;
        }
        h=h/10;
        strong+=n;
    }
    if (alt==strong)
       printf("\n%d is an armstrong number.\n\n",strong);
    else
       printf("\n%d is not an armstrong number.\n\n",strong);
}*/



//-----------------------------------------------------


//To print armstrong numbers in a range.


#include<stdio.h>
int main()
{
    int strong,alt,c,n,end,k,j,g;
    printf("\nEnter a start and end point to print armstrong numbers between them:");
    scanf("%d %d",&n,&end);
    for (n;n<=end;n++)
    {
        strong=0;
        alt=n;
        k=n;

        while (k>0)
        {
            c=k%10;
            j=1;
            g=n;
            while (g>0)
            {
                j=j*c;
                g=g/10;
            }
            strong=strong + j;
            k/=10;
        }
        if (strong==alt)
            printf("\n%d\n",strong);
    }   
    return 0;
} 


/* https://youtu.be/0A3EgOztptQ?si=SS1AOby7LB8mIpm5    */

