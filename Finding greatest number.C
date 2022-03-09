
#include <stdio.h>

void main ()
{
    int a,b,i;
    i=0;
    
    while(i<5)
    {
    printf("Please enter the No A :");
    scanf("%d",&a);
    printf("Please enter the No B :");
    scanf("%d",&b);
    if (a>b)
    {
       printf("A is greater than B\n"); 
    }
    else
    {
        printf("A is less than B\n");
    }
    i=i+1;
    }
}
