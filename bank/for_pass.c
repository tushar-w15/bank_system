#include<stdio.h>
#include<string.h>

struct {
    char user[15];
    char name[50];
    char dob[15];
    char date[15];
    char pass[15];
    char ac[10];
    char bal[10];
    char no[11];
    char sq[15];
} add2[100],check2;

int forPass(int rtn){
    int i;
    FILE *ptr;
        ptr=fopen("record.dat","r");
    retry:
    printf("\nEnter Username : ");
    scanf("%s",check2.user);
        i=0;
    
while(fscanf(ptr,"%s %s %s %s %s %s %s %s %s\n",add2[i].user,add2[i].name,add2[i].dob,add2[i].date,add2[i].ac,add2[i].bal,add2[i].pass,add2[i].no,add2[i].sq)!=EOF){
    if(strcmpi(add2[i].user,check2.user)==0){
        goto success;
        break;
    }
    i++;
}
 printf("\n\n\tUsername doesnot Exist!!\n\tTry Again...");
        fclose(ptr);
        rtn=0;
        return rtn;

success:
printf("\n\tEnter Security Que (Pet Name) : ");
scanf("%s",check2.sq);

if(strcmpi(add2[i].sq,check2.sq)==0){
printf("Your Password Is :%10s\n",add2[i].pass);
    rtn=1;
    return rtn;
}
else{
    printf("\n\tSecurity quetion doesnot match!!");
    goto success;
}
}