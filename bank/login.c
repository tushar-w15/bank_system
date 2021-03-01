#include<stdio.h>
#include<String.h>
int result=0;

struct {
     char user[15];
    char name[50];
    char dob[15];
    char date[15];
    char pass[15];
    char ac[10];
    int bal;
    char no[11];
    char sq[15];
} add1[100],check1;

int login(int* ptr4){
    char* a[2]={"Enter Username : ","Enter Password : "};
        int i;
    FILE* ptr;
        ptr=fopen("record.dat","r");

    tryagain:
    printf("\n\n\t%s",a[0]);
        scanf("%s",check1.user);
            i=0;
while(fscanf(ptr,"%s %s %s %s %s %d %s %s %s\n",add1[i].user,add1[i].name,add1[i].dob,add1[i].date,add1[i].ac,&add1[i].bal,add1[i].pass,add1[i].no,add1[i].sq)!=EOF){

    if(strcmpi(add1[i].user,check1.user)==0){
        goto password;
        break;
    }
    i++;
}
 printf("\n\n\tUser Doesnot Exist!!\n\tTry Again...");
        fclose(ptr);
        
        return 0;

password:
    printf("\n\t%s",a[1]);
        scanf("%s",check1.pass);

if(strcmpi(add1[i].pass,check1.pass)==0){
    printf("\n\n\tPassword Matched successfully");
    fclose(ptr);
    *ptr4=i;
    result=1;
    return 1;
}
else{
    printf("\n\tPassword Doesnot Match\n\n\tTry Again");
        fclose(ptr);
        login(ptr4);
}
}