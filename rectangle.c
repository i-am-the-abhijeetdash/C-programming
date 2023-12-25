#include<stdio.h>
int main()
{
    int len,bre,area,perimeter;
    char choose="i";
    printf("\nChoose between perimeter and area.\nPress \'p\' for perimeter.\nPress \'a\' for area.\n\n");
    scanf("%s",&choose);
    printf("\nEnter length and breadth \nof the rectangle respectively:\n\n");
    scanf("%d %d",&len,&bre);
    switch(choose)
    {
        case 'p':
           perimeter=2*(len+bre);
           printf("\n%d is the perimeter.\n\n",perimeter);
           break;
        case 'a':
           area=len*bre;
           printf("\n%d is the area.\n\n",area);
           break;
    }
    return 0;
}