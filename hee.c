#include<stdio.h>
int main()
{
    for(int i=0;i<10;i++)
    { for(int j=0;j<10-i;j++)
        printf(" ");
        for(int h=0;h<=i;h++)
        printf("* ");
        printf("\n");
    }
    return 0;
}


