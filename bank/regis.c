#include<stdio.h>
#include<string.h>

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

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

void regis(){
    char* b[8]={"(1) Enter Username : ","(2) Enter Name : ","(3) Enter DOB(dd/mm/yy) : ","(4) Enter Today's Date(dd/mm/yy) : ","(5) Enter New A/C No. : ","(6) Enter Password : ","(7) Enter Mobile no. :","(8) Enter security Que(Pet Name) : "};
   int i=0;
FILE *fp,*fp2;

fp=fopen("record.dat","a+");
fp2=fopen("record.dat","r");

username:
printf("\n\n%s",b[0]);
scanf("%s",check.user);
printf("%s",check.user);

while(fscanf(fp2,"%s %s %s %s %s %s %s %s\n",add[i].user,add[i].name,add[i].dob,add[i].date,add[i].ac,add[i].pass,add[i].no,add[i].sq)!=EOF){

    if(check.user==add[i].user){
        printf("\nUsername Already Taken!!");
        goto username;
    }
    i++;
    printf("%s",add[i].user);
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

    printf("\nLoading");
    for(int i=0;i<4;i++){
        fordelay(100000000);
        printf(".");
       }

    printf("\nRegistered Successfully!");
    printf("\n%d",i);
}