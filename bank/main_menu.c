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
} add3[100],check3;

void atm(){
    char* b[3]={"(1) Deposit money","(2) Widhray money","(3) Check balance"};
        int choice3;

    for(int i=0;i<3;i++){
        printf("\n\t%s",b[i]);
    }
printf("\n\n\tEnter Choice : ");
scanf("%d",&choice3);

switch(choice3){

    case 1:printf("\n\tEnter how much money you want to deposit :$");
    break;

    case 2:printf("\n\tEnter how much money you want to widhraw :$");
    break;

    case 3:
    break;

    default:printf("\n\tError choice");
}

}
    

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