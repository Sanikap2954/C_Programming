#include <stdio.h>
#include <conio.h>

int main()
{
        int Num1 = 0, Num2 =  0;

        printf("\n Enter 1 st Number:");
        scanf("%d",&Num1);
        printf("\n Enter 2 nd number :");
        scanf("%d",&Num2);


        if (Num1 == Num2)
        {
            printf("\n Both Givan Number are Equal ");
        }
        else if(Num1 < Num2)
            {
            printf("\n Number %d is Minimum.",Num1);
            }
            else{
            printf("\n Number %d is Minimum.",Num2);
            getch();
        return 0;
            }
}
