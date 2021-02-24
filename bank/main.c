#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "main_menu.c"
#include "regis.c"
#include "step1.c"
#include "login.c"
#include "for_pass.c"

int main(){
   char choice,choice2;
    int rtn1,rtn2,rtn3;

   choice=step1(choice);

   switch(choice){
       case '1':rtn1=regis(rtn1);
       if(rtn1==1){
           mainMenu();
        }
       break;

       case '2':retry:
       rtn2=login(rtn2);
        if(rtn2==1){
            mainMenu();
        }
        else{
            goto retry;
        }
       break;

       case '3':tryag:
       rtn3=forPass(rtn3);
        if(rtn3==1){
            printf("\t thankyou");
            exit(1);
        }
        else{
            goto tryag;
        }
       break;
   }


  scanf(" %c",&choice2);
  printf("%c",choice2);

    return 0;
}