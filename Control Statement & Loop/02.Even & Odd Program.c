#include<stdio.h>
#include<conio.h>

    int main()
    {
        int Num = 0 ;

        printf("Enter The Number :");
        scanf("%d",&Num);


         if(Num % 2 == 0)
        {
            printf("\n The number is Even .\n ");
        }
        else{
            printf("\n The number is Odd .\n");
        }
        return 0;
    }


