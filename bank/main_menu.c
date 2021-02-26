#include<stdio.h>
#include<string.h>

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
} add3[100],check3;

void atm();
void atmdep();
void atmwid();
void atmbal();

void mainMenu(){
    char* a[4]={"(1) ATM Feature","(2) A/C Information","(3) Transactions","(4) EXIT"};
    int choice2;

    printf("\n\n====================MAIN MENU====================\n\n");

    for(int i=0;i<4;i++){
        printf("\n%s",a[i]);
    }
    printf("\n\n  Enter Choice : ");
    scanf("%d",&choice2);

    switch(choice2){
        case 1:atm();
            break;
        
        case 2:
            break;
        
        case 3:
            break;

        case 4:
            break;

        default:printf("\n\n\tError Choice!!");
    }
}

void atm(){
    char* b[3]={"(1) Deposit money","(2) Withdray money","(3) Check balance"};
    int choice3,rtn4;
    char another='y';

    for(int i=0;i<3;i++){
        printf("\n\t%s",b[i]);
    }
printf("\n\n\tEnter Choice : ");
scanf("%d",&choice3);

switch(choice3){

    case 1:atmdep();
    break;

    case 2:atmwid();
    break;

    case 3:atmbal();
    break;

    default:printf("\n\tError choice");
}

}
void atmdep(){
    FILE* ptr1,*ptr2;
    char another='y';
    do{
        ptr1=fopen("record.dat","r");
        int i;
        i=0;
        printf("\n\tEnter Username : ");
        scanf("%s",check3.user);
            while(fscanf(ptr1,"%s %s %s %s %s %d %s %s %s\n",add3[i].user,add3[i].name,add3[i].dob,add3[i].date,add3[i].ac,&add3[i].bal,add3[i].pass,add3[i].no,add3[i].sq)!=EOF){
                if(strcmpi(add3[i].user,check3.user)==0){
                goto cont;
                }
            i++;
            }
        printf("\n\tUser doesnot exist!!\n\tTry again!");
        atmdep();
    cont:
        ptr2=fopen("record.dat","w");
        printf("\n\tEnter how much money you want to deposit :$");
        scanf("%d",&check3.bal);
        fprintf(ptr2,"%s %s %s %s %s %d %s %s %s\n",add3[i].user,add3[i].name,add3[i].dob,add3[i].date,add3[i].ac,add3[i].bal+check3.bal,add3[i].pass,add3[i].no,add3[i].sq);

    printf("\nAdded Successfully!");
    printf("\n\n\tWant another deposit transaction(y/n) : ");
        scanf(" %c",&another);
        fclose(ptr1);
        fclose(ptr2);
}while(another=='y');
}
void atmwid(){
    FILE* ptr1,*ptr2;
    char another='y';
    do{
        ptr1=fopen("record.dat","r");
        int i;
        i=0;
        printf("\n\tEnter Username : ");
        scanf("%s",check3.user);
            while(fscanf(ptr1,"%s %s %s %s %s %d %s %s %s\n",add3[i].user,add3[i].name,add3[i].dob,add3[i].date,add3[i].ac,&add3[i].bal,add3[i].pass,add3[i].no,add3[i].sq)!=EOF){
                if(strcmpi(add3[i].user,check3.user)==0){
                goto conti;
                }
            i++;
            }
        printf("\n\tUser doesnot exist!!\n\tTry again!");
        atmwid();
    conti:
        ptr2=fopen("record.dat","w");
        printf("\n\tEnter how much money you want to withdraw :$");
        scanf("%d",&check3.bal);
        if(check3.bal>add3[i].bal){
            printf("\n\tYou dont have enough money to withdraw!!\n\t\tTry again!!");
            goto conti;
        }
        fprintf(ptr2,"%s %s %s %s %s %d %s %s %s\n",add3[i].user,add3[i].name,add3[i].dob,add3[i].date,add3[i].ac,add3[i].bal-check3.bal,add3[i].pass,add3[i].no,add3[i].sq);

    printf("\nWithdrawn Successfully!");
    printf("\n\n\tWant another withdraw transaction(y/n) : ");
        scanf(" %c",&another);
        fclose(ptr1);
        fclose(ptr2);
}while(another=='y');
}
void atmbal(){
    int i=0;
    FILE* ptr;
    ptr=fopen("record.dat","r");

    printf("\n\tEnter username : ");
    scanf("%s",check3.user);
        while(fscanf(ptr,"%s %s %s %s %s %d %s %s %s\n",add3[i].user,add3[i].name,add3[i].dob,add3[i].date,add3[i].ac,&add3[i].bal,add3[i].pass,add3[i].no,add3[i].sq)!=EOF){
                if(strcmpi(add3[i].user,check3.user)==0){
                goto con;
                }
            i++;
            }
        printf("\n\tUser doesnot exist!!\n\tTry again!");
        atmbal();
    con:
    printf("\n\n\tYour balance is => %d",add3[i].bal);
}