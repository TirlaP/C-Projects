extern int hour, minute, second, flag;

void printData()
{
    system("cls");
    printf("\n\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \xB2\n|");
    printf("\t\t\t\t\t\t\t|\n");
    printf("|\t\t 1. Alegeti timpul \t\t\t|\n");
    printf("|\t\t 2. Start temporizator \t\t\t|\n");
    printf("|\t\t 3. Stop temporizator \t\t\t|\n");
    printf("|\t\t 4. Reseteaza temporizator \t\t|\n");
    printf("|\t\t 5. Iesiti din program \t\t\t|\n");
    printf("\xB2_______________________________________________________\xB2\n\n");

    printf("\n\n**********************************\n");
    printf("\th %d : m %d : s %d", hour, minute, second);
    printf("\n**********************************\n");
}

void selectMenu()
{
        switch(getch())
        {
        case 49:
            flag = 0;
            break;
        case 50:
            flag = 1;
            break;
        case 51:
            hour = minute = second = 0;
            flag = 1;
            printData();
            break;
        case 52:
            hour = minute = second = 0;
            flag = 1;
            printData();
            break;
        case 53:
            printf("\n * Ati ales sa parasiti programul. La revedere!\n");
            exit(1);
            break;
        default:
            printf("\n\t\t ### WARNING! ###\n\n * Valoarea nu este valabila! Incercati din nou.\n");
            printf("\n\n Press any key to continue!\n\n");
            getch();
        }
}



