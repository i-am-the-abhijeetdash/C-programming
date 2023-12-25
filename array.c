
/*Convert binary to decimal*/

// 1010001
/*#include<stdio.h>
int main()
{
    int a[30];
    long int n,m=1,dec=0,i,j;
    printf("\nEnter binary value:");
    scanf("%ld",&n);
    for (n;n>0;n=n/10)
    {
        j=n%10;
        dec += j*m;
        m=m*2;
    }
    printf("%ld",dec);
    return 0;
}*/


/*Convert decimal to binary.*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    int l,p=1,q;
    
    
    while (p!=0)
    { 
        printf("\n-------------------------------------------\n");
        printf("Press 1 to convert binary to decimal.\nPress 2 to convert decimal to binary.");
        printf("\n-------------------------------------------\n");
        scanf("%d",&l);
        
        if (l==1)
    {
        long long int n,m=1,dec=0,j;
        printf("\nEnter binary value to get its decimal number:");
        scanf("%lld",&n);
        printf("\nDecimal value of %lld is:",n);
        for (n;n>0;n=n/10)
        {
            j=n%10;
            dec += j*m;
            m=m*2;
        }

        printf("%lld",dec);
        printf("\n\n");
    }

    else if(l==2)
    {
        long int a[30],n,i=0,k;
        printf("\nEnter decimal number to get its binary:");
        scanf("%ld",&n);
        printf("\nBinary value of %ld is:",n);
        for (n;n>0;n=n/2)
        {
            a[i]=n%2;
            i+=1;
        }
        
        for (k=i-1;k>=0;k--)
        {
            printf("%ld",a[k]);
        }
        printf("\n\n");
    }
    printf("\nDo you want to continue?\nPress 1 to continue.\nPress 0 to exit.\n");
    scanf("%d",&p);

   }
    return 0;

}*/


// Parity bit consider even case.
/*#include<stdio.h>
int main()
{

    long long int n,par=0,j;
    printf("\nEnter binary value to get its parity bit:");
    scanf("%lld",&n);
    for (n;n>0;n=n/10)
    {
        j=n%10;
        if (j==1)
        {
            par+=1;
        }
    }
    if (par%2!=0)
           printf("\nParity bit for %lld is: 1.\n\n",n);
    else 
        printf("\nParity bit for %lld is: 0.\n\n",n);
    return 0;
}*/


//Bubble sorting an array as well as binary search.
/*#include<stdio.h>
int main()
{
    int beg=0,end,a[30],n,i,ele,k,j;
    int f;
    printf("\nHow many elements do you want to enter in the array?:");
    scanf("%d",&n);
    end=n;
    for (i=0;i<n;i++)
    {
        scanf("%d",&ele);
        a[i]=ele;
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
        
            if (a[j]>a[j+1])
            {
               a[j+1]+=a[j];
               a[j]=a[j+1]-a[j];
               a[j+1]-=a[j];
            }
        }
    }

    int num,mid;
    printf("\n\nEnter number to find from the array:");
    scanf("%d",&num);
*/
    /*while (beg<=end)
    {
        mid=(beg+end)/2;
        if (a[mid]==num)
        {
            printf("\nFound at position %d in the sorted array.\n\n",mid);
            break;
        }
        if (num>a[mid])
            beg=mid+1;
        else if(num<a[mid])
            end=mid-1;
    }

 for (i=beg;beg<=end;i++)
    {
        mid=(beg+end)/2;
        if (a[mid]==num)
        {
            printf("\nFound at position %d in the sorted array.\n\n",mid);
            break;
        }
        if (num>a[mid])
            beg=mid+1;
        else if(num<a[mid])
            end=mid-1;
    }
    int c=5,b;
    b=++c + ++c + ++c;
    printf("%d %d",c,b);
    return 0;

}*/


/*Functions

*/

/*#include<stdio.h>
int palindrome(int);

int main()
{
    int n,o;
    printf("\n\nEnter number to check if it is a palindrome:");
    scanf("%d",&n);
    o=palindrome(n);
    if (o==n)
    {
        printf("\n%d is a palindrome.",n);
    }
    return 0;
}

int palindrome(int k)
{
    int i,j,rev=0;
    for (i=k;i>0;i/=10)
    {
        j=i%10;
        rev= rev*10 + j;       
    }
    return rev;
}
*/

/*Using function to print a numbers table.*/


/*#include<stdio.h>
int table(int);
int main()
{
    int h;
    printf("\nEnter a number to print its table:");
    scanf("%d",&h);
    printf("\n");
    table(h);
    return 0;
}

int table(int g)
{
    int f,i;
    printf("Table of %d is as follows:\n",g);
    for (i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d.",g,i,g*i);
    }
    
}
*/

/*Using function to swap two values.*/


/*#include<stdio.h>
int swap(int,int);
int main()
{
    int a,b;
    printf("\nEnter 2 numbers to swap:");
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}

int swap(int d,int f)
{
    int h,k,l;
    k=d;
    l=f;
    h=f;
    f=d;
    d=h;
    if (d==l && f==k)
    {
        printf("\nNumbers have been swapped.\n");
        printf("\nNumbers stored in a and b before swapping were %d and %d.\n",k,l);
        printf("\nNumbers stored in a and b after swapping are %d and %d.\n",d,f);
    }

    else
        printf("Numbers have not been swapped.");
}
call by value functions that don't return anything.
*/

/*#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("\nEnter no. of rows and columns for both matrices:");
    scanf("%d %d",&r,&c);
    int A[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\nEnter value for A%d%d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\nMatrix 1:");
    for (i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
        {
            printf("%5d ",A[i][j]);
        }
    
    }
    
    printf("\n\n");

    


    int B[r][c];
    printf("\n\nEnter values for matrix 2:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\nEnter value for B%d%d: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    
    printf("\nMatrix 2:");
    for (i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
        {
            printf("%5d ",B[i][j]);
        }
    
    }
    printf("\n\n");
    

   int C[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }


    printf("\n\nFinal matrix after sum:");

    for (i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
        {
            printf("%5d ",C[i][j]);
        }
    }
    return 0;

}   */


/*#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("\nEnter no. of rows and columns for a square matrix:");
    scanf("%d %d",&r,&c);
    int A[r][c];
    if (r==c)
    {
        for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\nEnter value for A%d%d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\nEntered Matrix is:");
    for (i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
        {
            printf("%5d ",A[i][j]);
        }
    
    }

    int k=0;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i==j)
            {
                k+=A[i][j];
            }
        }
    }
    printf("\n\nSum of diagnoal elements is: %d.",k);

    }

    else 
        printf("\n\nYou didn't enter the no. of rows and columns equal to each other.\nA square matrix has equal no. of rows and columns.\nRun the code again :).\n\n");
   return 0;
}
*/


/*#AD (SPLITTING AN ARRAY FROM A MENTIONED POSITION AND TRANSFER
ALL THE ELEMENTS FROM THE RIGHT OF THE SPLITTING POSITION TO THE LEFT.
AND RIGHT SHIFT ALL THE LEFT ELEMENTS BEFORE SPLITTIING POSITION.)
*/
/*#include<stdio.h>
int SPLIT(int split[],int pos, int n);
int SPLIT(int split[],int pos,int n)
{
    int splith[2*n],k=0,cnt=0,i,j;
    

    for (i=0;i<pos;i++)
    {
        splith[i]=split[i];
    }

    for (i=pos;i<n;i++)
    {
        splith[k]=split[j];
        split[j]=split[i];  
        k+=1;
        j+=1;
        cnt+=1;
    }

    int l=0;
    for (i=cnt;i<n;i++)
    {
        split[i]=splith[l]; 
        l+=1;
    }
    printf("\n\nFinal array is:");
    for (i=0;i<n;i++)
    {
        printf("%d ",split[i]);
    }
}
int main()
{
    int n,pos,i;
    printf("\n\nEnter no. of elements you want to insert in split array:");
    scanf("%d",&n);
    int split[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&split[i]);
    }



    printf("\n\nInitial array is:");
    for (i=0;i<n;i++)
    {
        printf("%d ",split[i]);
    }

    //SPLIT(split,pos,n);



    int splith[n],cnt=0,j=0;
    printf("\n\nEnter position to split the array from and add the rhs to the start:");
    scanf("%d",&pos);

//# Better logic because of less memory consumption.
    for (i=0;i<pos;i++)
    {
        splith[i]=split[i];
    }

    for (i=0;i<n-pos;i++)
    {
        split[i]=split[i+pos]; 
    }


    for(i=0;i<pos;i++)
    {
        split[n-pos+i]=splith[i];
    }

//# My logic which I thought initially.
    for (i=0;i<pos;i++)
    {
        splith[i]=split[i];
    }
    
    for (i=pos;i<n;i++)
    {
        split[j]=split[i];  
        j+=1;
        cnt+=1;       
    }
    
    int l=0;
    for (i=cnt;i<n;i++)
    {
        split[i]=splith[l]; 
        l+=1; 
    }
    
    printf("\n\nFinal array is:");
    for (i=0;i<n;i++)
    {
        printf("%d ",split[i]);
    }
    return 0;
}*/




/*Find hcf with the help of recursion*/
/*#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int a,b;
    printf("Enter two numbers to find their hcf:");
    scanf("%d %d",&a,&b);
    printf("HCF of %d and %d is: %d.",a,b,hcf(a,b));
    return 0;
}
int hcf(int a,int b)
{
    if(b!=0)
    {
        return hcf(b,a%b);
    }
    else 
        return a;
}
*/

/*#include<stdio.h>
int fact(int a);
int main()
{
    int a;
    printf("Enter number to get its factorial:");
    scanf("%d",&a);
    printf("Factorial of %d is %d.",a,fact(a));
    return 0;
}

int fact(int a)
{
    if (a==1)
       return a;
    else 
       return a*fact(a-1);
}*/

/*#include<stdio.h>
int nat(int a);
int main()
{
    int a=1;
    printf("\n\nNatural numbers till 50 are:");
    nat(a);
    return 0;
}


int nat(int n)
{
    if (n<=50)
    {
        printf("\n%d ",n);
        nat(n+1);
    }
    
}*/

/*#include<stdio.h>
int sum(int a);
int main()
{
    int a;
    printf("Enter n to print the Sum of natural numbers from 1 to n:");
    scanf("%d",&a);
    printf("\n\nSum of natural numbers from 1 to %d is:",a);
    printf("%d",sum(a));
    return 0;
}


int sum(int n)
{
    if (n>=1)
    {
        return n+=sum(n-1);
    }
    
    else
        return n;
}*/

#include<stdio.h>
int fibo(int a);
int main()
{
    int a;
    printf("Enter n to print n fibonnaci terms:");
    scanf("%d",&a);
    printf("\n\n%d fibonnacci terms are:",a);
    return 0;
}


int fibo(int n)
{
    if (cnt<=n)
    {
        cnt+=1;
        printf("%d",a);
        a=a+=1
    }
}
/*#include<stdio.h>
int pattern(int array[],int n,int i);

int main()
{
    int i;
    int array[6];
    pattern(array,0,0);
    for (i=0;i<6;i++)
    {
        printf("%d\n",array[i]);
    }
}

int pattern(int array[],int n,int i)
{
    if (i<6)
    {
        array[i]=n;
        return pattern(array,n+2,i+1);
    }
}*/

//Transitioning between cases (upper,lower,title and toggle)
//and checking for palindrome as well as print a special type
//of output.

/*#include<stdio.h>
void main()
{
    char str[60];
    int i=0;

    //Convert to upper case sentence.
    /*printf("Enter sentence to convert it into upper case sentence:");
    gets(str);
    for (i;str[i]!='\0';i++)
    {
        if (str[i]>=97 && str[i]<=127)
              str[i]-=32;
    }*/

//Convert to lower case sentence.
    /*printf("Enter sentence to convert it into lower case sentence:");
    gets(str);
    for (i;str[i]!='\0';i++)
    {
        if (str[i]>=65 && str[i]<=95)
              str[i]+=32;
    }*/
    
    

//Convert a sentence to title case.

    /*printf("\nEnter sentence to convert it into title case sentence:");
    gets(str);
    for (i;str[i]!='\0';i++)
    {
        if (i==0 && (str[i]>=97 && str[i]<=127))
            str[i]-=32;
        if (str[i]==32)
              str[i+1]-=32;
            
    }
    printf("\n%s",str);*/

//Convert a sentence to toggle case.

    /*printf("\nEnter sentence to convert it into toggle case sentence:");
    gets(str);
    for (i;str[i]!='\0';i++)
    {
        if (str[i]>=97 && str[i]<=127)
            str[i]-=32;
        else if (str[i]>=65 && str[i]<=95)
              str[i]+=32;
            
    }
    printf("\n%s",str);*/

/*#include<stdio.h>
int main()
{
    char str[5][50];
    
}*/




/*print any word say maya as:

m
ma
may
maya*/

    /*printf("\nEnter sentence to print in a specific pattern:");
    gets(str);
    int j;
    for (i;str[i]!='\0';i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }*/

//To check if a given name is palindrome or not.
 /*   int ctr=0;
    printf("\nEnter a name to check if it is a palindrome or not: ");
    gets(str);
    int j=0;
    for (i=0;str[i]!='\0';i++)
    {
        ctr+=1;
    }
    int n=0;
    for (i=0;i<=ctr/2;i++)
    {
        if (str[i]!=str[ctr-i-1])
        {
            n=1;
        }
    }
    if (n==1)
        printf("\n%s is not a palindrome name.",str);
    else 
        printf("\n%s is a palindrome name.",str);
}*/


/*#include<stdio.h>
void main()
{
    char str[20][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ninety","eighty","seventy","sixty","fifty","forty","thirty","tewnty","one","zero"};
    int a;
    char one[15][10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    printf("\nEnter a 3 digit number to print it in words:");
    scanf("%d",&a);
    int words[10];
    int g=a;
    int j=0;
    for (a;a>0;a/=10)
    {
        words[j]=a%10;
        j++;
    }

    int ctr=19;
    if (j==2 || j>3 || j<3)
    {
        printf("The number you entered is not a 3 digit number,rerun the program and enter a 3 digit number.");
    }


    else if (words[j-2]==1)
    {
        printf("\n%d in words is %s hundred and %s.",g,str[words[2]],one[g%10]);
    }

    else if(words[j-3]!=0 && words[j-2]==0)
    {
        printf("\n%d in words is %s hundred and %s.",g,str[words[2]],str[words[j-3]]);
    }


    else if(words[j-3]==0 && words[j-2]==0)
    {
        printf("\n%d in words is %s hundred.",g,str[words[2]]);
    }   


    else if(words[j-3]==0 && words[j-2]!=0)
       {
        printf("\n%d in words is %s hundred %s.",g,str[words[2]],str[ctr-words[j-2]]);
       } 


    else
        {
            printf("\n%d in words is %s hundred and %s %s.",g,str[words[j-1]],str[ctr-words[j-2]],str[words[j-3]]);
        }
}*/

/*#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],stchange[50],sttemp[50];
    gets(str);
    int g=strlen(str);
    int h;
    int k=0;
    int end=0;
    g=g-1;
    printf("\n%d",g);
    for (g;g>0;g--)
    {
        printf("\ng: %d",g);
        end+=1;
        if (str[g]==32)
        {
            printf("\nValue of k before for loop:%d.",k);
            for (h=g+1;h<=(g+end-1);h++)
            {
                printf("\nh value:%d",h);
                sttemp[k]=str[h];
                printf("\nlength of sttemp:%d",strlen(sttemp));
                printf("\n%s",sttemp);
                printf("\nk: %d",k);
                k++;
            }
            end=0;
        }
    }
    printf("\n\n%d",strlen(sttemp));
    printf("\n%s",sttemp);
}*/

/*#include <stdio.h>
#include<string.h>
void main() 
{
    char str[50],stchange[20][20];
    printf("Enter sentence to print it in reverse words wise:");
    gets(str);
    int i,j=0;
    int ctr=-1;
    for (i=0;str[i]!='\0';i++)
    {
        ctr+=1;
        if (str[i]==32)
        {
            for (j;j<ctr;j++)
            {
                stchange[i][j]=str[i];
            }
            j=i+1;
            ctr=0;
        }
    }
    for (i=0;i<3;i++)
    {
        printf("\n%s",stchange[i]);
    }
    printf("%s",stchange);
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char sta[50],stb[50];
    gets(sta);
    int j;
    int m=0;
    //printf("%s",sta);
    j=strlen(sta);
    j=j-1;
    for (j;j>=0;j--)
    {
        //printf("\n%c",sta[j]);
        stb[m]=sta[j];
        m++;
    }
    printf("%s",stb);

}*/

/*#include<stdio.h>
union data
{
    char ch;
    int num;
    float res;
};





/*union data t;
t.num=65;
printf("%d\n",t.num);
printf("%c\n",t.ch);
printf("%f\n",t.res);

}*/