#include<stdio.h>
int main()
{     
      int a=1;
      printf("\nHello");
      goto abc;
      printf("\nThank you");
      printf("\nYou are welcome");
abc:
      printf("\nThe end");
      printf("\nLast but not the least\n\n");
      if (a++<5)
          goto abc;
      return 0;
}