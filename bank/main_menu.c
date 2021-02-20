#include<stdio.h>
#include<string.h>

void mainMenu(){
    char* a[4]={"(1) ATM Feature","(2) A/C Information","(3) Transactions","(4) EXIT"};
    
    printf("\n\n====================MAIN MENU====================\n\n");

    for(int i=0;i<4;i++){
        printf("\n%s",a[i]);
    }
    printf("\n\n  Enter Choice : ");
}