#include<stdio.h>
#include<conio.h>

 int main()
 {
      int i = 0,Num = 0;

      printf("\n Enter Number = ");
      scanf("%d",&Num);

      for(i = 1; i <= 10; i++)
     {
         printf("%d",i*Num);
         printf("\n");
     }
        getch();
       return 0;

 }
