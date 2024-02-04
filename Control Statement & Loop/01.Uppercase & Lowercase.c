#include <stdio.h>
#include <conio.h>

int main()
{
        char ch =  0;

        printf("\n\n Enter a Character " );
        scanf("%c",&ch);

        if((ch >= 'A') && (ch <= 'Z'))
        {
            printf("\n\n Given character is uppercase letter.\n ");
        }
        else if((ch >= 'a') && (ch <= 'z'))
        {
            printf("\n\n Given Character is lowercase letter\n");
        }

        else if((ch >=0) && (ch <= 9))
        {
            printf("\n\n Given character is digit\n ");
        }
        else
        {
            printf("\n\n Given character is special symbol\n ");

        getch();
        return 0;
}
}
