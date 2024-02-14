#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Temp = 0, Rev = 0;

    printf("\n Enter a number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp != 0)
    {
         Rev =(Rev * 10)+(Temp % 10);
         Temp = Temp / 10 ;
    }
    printf("\n\n Reverse of %d = %d",Num,Rev);

    getch();
    return 0;

}
