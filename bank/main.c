#include<stdio.h>
#include<string.h>
#include<time.h>
#include "main_menu.c"
#include "regis.c"
#include "step1.c"
#include "login.c"

void forPass();

int main(){
   char choice,choice2;
    int rtn1,rtn2;
   choice=step1(choice);

   switch(choice){
       case '1':rtn1=regis(rtn1);
       if(rtn1==1){
           mainMenu();
        }
       break;

       case '2':rtn2=login(rtn2);
        if(rtn2==1){
            mainMenu();
        }
       break;

       case '3':forPass();
       break;
   }


  scanf(" %c",&choice2);
  printf("%c",choice2);

    return 0;
}

void forPass(){
    char a[1][15];
    printf("Enter Security Que (Pet Name) : ");
    scanf("%s",&a[0]);
}