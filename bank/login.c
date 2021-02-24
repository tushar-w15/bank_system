#include<stdio.h>
#include<String.h>

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
} add1[100],check1;

int login(int rtn){
    char* a[2]={"Enter Username : ","Enter Password : "};
        int i;
    FILE* ptr;
        ptr=fopen("record.dat","r");

    tryagain:
    printf("\n\n\t%s",a[0]);
        scanf("%s",check1.user);
            i=0;
while(fscanf(ptr,"%s %s %s %s %s %s %s %s %s\n",add[i].user,add[i].name,add[i].dob,add[i].date,add[i].ac,add[i].bal,add[i].pass,add[i].no,add[i].sq)!=EOF){

    if(strcmpi(add1[i].user,check1.user)==0){
        break;
    }
    else if(EOF){
        printf("\n\n\tUser Doesnot Exist!!\n\tTry Again...");
        fclose(ptr);
        rtn=0;
        return rtn;
    }
    i++;
}
password:
    printf("\n\n\t%s",a[1]);
        scanf("%s",check1.pass);

if(strcmpi(add1[i].pass,check1.pass)==0){
    printf("\n\n\tPassword Matched successfully");
    fclose(ptr);
    rtn=1;
    return rtn;
}
else{
    printf("\n\tPassword Doesnot Match\n\n\tTry Again");
        fclose(ptr);
        login(rtn);
}
}