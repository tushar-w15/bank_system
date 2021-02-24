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
    printf("\nEnter Security Que (Pet Name) : ");
    scanf("%s",check2.sq);
        i=0;
    
while(fscanf(ptr,"%s %s %s %s %s %s %s %s %s\n",add[i].user,add[i].name,add[i].dob,add[i].date,add[i].ac,add[i].bal,add[i].pass,add[i].no,add[i].sq)!=EOF){
    if(strcmpi(add2[i].sq,check2.sq)==0){
        goto success;
        break;
    }
    i++;
}
 printf("\n\n\tPet doesnot Exist!!\n\tTry Again...");
        fclose(ptr);
        rtn=0;
        return rtn;

success:        
printf("Your Password Is :%10s\n",add2[i].pass);
    rtn=1;
    return rtn;
}