#include <stdio.h>
#include <stdlib.h>

void citireSir(char s[])
{
    printf("\n * Introdu sirul: ");
    gets(s);
}

void afisareSir(char s[])
{
    printf("\n * Sirul citit este: %s", s);
}

int main()
{
    char s[100], optiune;


    do
    {
        system("cls");
        printf("\t 1 - Citeste sirul\n"
               "\t 2 - Afiseaza sirul\n"
               "\t 3 - Iesi din program\n"
               "\n Alege optiunea ta:");

        switch(getch())
        {
        case '1':
            citireSir(s);
            printf("\n\n Press any key to continue!");
            getch();
            break;
        case '2':
            afisareSir(s);
            printf("\n\n Press any key to continue!");
            getch();
            break;
        case '3':
            exit(0);
        }
    }while (1);

    return 0;
}
