#include<stdio.h>
#include<string.h>
struct {
    char user[15];
    char name[50];
    char dob[15];
    char date[15];
    char pass[15];
    char ac[10];
    char no[11];
    char sq[15];
} add[100],check;

int regis(int rtn){
    char* b[8]={"(1) Enter Username : ","(2) Enter Name : ","(3) Enter DOB(dd/mm/yy) : ","(4) Enter Today's Date(dd/mm/yy) : ","(5) Enter New A/C No. : ","(6) Enter Password : ","(7) Enter Mobile no. :","(8) Enter security Que(Pet Name) : "};
   int i;
FILE *fp;

fp=fopen("record.dat","a+");

username:
printf("\n\n%s",b[0]);
    scanf("%s",check.user);
        i=0;
while(fscanf(fp,"%s %s %s %s %s %s %s %s\n",add[i].user,add[i].name,add[i].dob,add[i].date,add[i].ac,add[i].pass,add[i].no,add[i].sq)!=EOF){
    if(strcmpi(add[i].user,check.user)==0){
        printf("\nUsername Already Taken!!");
        goto username;
    }
    i++;
}
    printf("\n%s",b[1]);
        scanf("%s",add[i].name);
    printf("\n%s",b[2]);
        scanf("%s",add[i].dob);
    printf("\n%s",b[3]);
        scanf("%s",add[i].date);
    printf("\n%s",b[4]);
        scanf("%s",add[i].ac);
    printf("\n%s",b[5]);
        scanf("%s",add[i].pass);
    printf("\n%s",b[6]);
        scanf("%s",add[i].no);
    printf("\n%s",b[7]);
        scanf("%s",add[i].sq);

        fprintf(fp,"%s %s %s %s %s %s %s %s\n",check.user,add[i].name,add[i].dob,add[i].date,add[i].ac,add[i].pass,add[i].no,add[i].sq);

    fclose(fp);

    printf("\nRegistered Successfully!");
    rtn=1;
    return rtn;
}