#include<stdio.h>
int main()
// Sept,jun,april,november
{
  int month;
  printf("\n\nEnter valid month name from 1 to 12.\n\n");
  scanf("%d",&month);
  switch(month)
  {
        case 9:
        case 6:
        case 4:
        case 11:
            printf("\n30 days in the entered month number.\n\n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n31 days in the entered month number.\n\n");
            break;            
        case 2:
            printf("\n28 days in the entered month number.\n\n");
            break;
        default: 
            printf("\nValid month number not entered.\n\n");
  }
}

