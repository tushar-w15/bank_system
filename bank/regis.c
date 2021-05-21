#include <stdio.h>
#include <string.h>
struct
{
    char user[15];
    char name[50];
    char dob[15];
    char date[15];
    char pass[15];
    char ac[10];
    int bal;
    char no[11];
    char sq[15];
} add[100], check;

char trans1;

int regis(int rtn)
{
    char *b[9] = {"(1) Enter Username : ", "(2) Enter Name : ", "(3) Enter DOB(dd/mm/yy) : ", "(4) Enter Today's Date(dd/mm/yy) : ", "(5) Enter New A/C No. : ", "(6) Enter how much money you want to deposit :$", "(7) Enter Password : ", "(8) Enter Mobile no. :", "(9) Enter security Que(Pet Name) : "};
    int i;
    FILE *fp, *tr;

    fp = fopen("record.dat", "a+");
    tr = fopen("transaction.dat", "a+");

username:
    printf("\n\n%s", b[0]);
    scanf("%s", check.user);
    i = 0;
    while (fscanf(fp, "%s %s %s %s %s %d %s %s %s\n", add[i].user, add[i].name, add[i].dob, add[i].date, add[i].ac, &add[i].bal, add[i].pass, add[i].no, add[i].sq) != EOF)
    {
        if (strcmpi(add[i].user, check.user) == 0)
        {
            printf("\nUsername Already Taken!!");
            goto username;
        }
        i++;
    }
    printf("\n%s", b[1]);
    scanf("%s", add[i].name);
    printf("\n%s", b[2]);
    scanf("%s", add[i].dob);
    printf("\n%s", b[3]);
    scanf("%s", add[i].date);
    printf("\n%s", b[4]);
    scanf("%s", add[i].ac);
    printf("\n%s", b[5]);
    scanf("%d", &add[i].bal);
    printf("\n%s", b[6]);
    scanf("%s", add[i].pass);
    printf("\n%s", b[7]);
    scanf("%s", add[i].no);
    printf("\n%s", b[8]);
    scanf("%s", add[i].sq);

    fprintf(fp, "%s %s %s %s %s %d %s %s %s\n", check.user, add[i].name, add[i].dob, add[i].date, add[i].ac, add[i].bal, add[i].pass, add[i].no, add[i].sq);
    fclose(fp);

    while (1)
    {
        trans1 = fgetc(tr);
        if (trans1 == EOF)
        {
            fprintf(tr, "+%d $%d\n", add[i].bal, add[i].bal);
            break;
        }
    }
    fclose(tr);

    printf("\nRegistered Successfully!");
    rtn = 1;
    return (rtn);
}