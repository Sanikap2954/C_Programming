#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, x = 0;
    printf("Enter Row & Column value : ");
    scanf("%d",&x);

    printf("\n===================Pattern================\n\n");

    for(i = 1; i <= x; i++ )
    {
        for(j =1; j <=x; j++ )
        {
            if(j ==1 || i == x)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n============================================\n");
    getch();
    return 0;
}
