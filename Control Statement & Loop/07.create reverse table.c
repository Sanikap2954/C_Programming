#include<stdio.h>
#include<conio.h>

int main()
{
      int i = 0, Num = 0;

      printf("\n Enter Number = ");
      scanf("%d",&Num);

      for(i = 10;i >= 1;i--)
      {
          printf("%d",i*Num);
          printf("\n");
      }


       return 0;
       getch();

}
