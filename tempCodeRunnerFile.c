#include<stdio.h>
int main()
{
    int num,n,c=0,new;
    long long int k;
    k=10;
    printf("\nEnter number to check its number of digits:");
    scanf("%d",&num);
    for (n=0;;n++)
      {
        new=num%k;
        k=k*10;
        c+=1;
        if (new==num)
            break;
      }
    printf("\n%d is the number of digits in %d.\n\n",c,num);
    return 0;

}