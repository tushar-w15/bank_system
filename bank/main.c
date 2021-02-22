#include<stdio.h>
#include<string.h>
#include<time.h>
#include "main_menu.c"
#include "regis.c"
#include "step1.c"
#include "login.c"

void forPass();
void delay(int j);

int main(){
   char choice,choice2;

   choice=step1(choice);

   printf("\nLoading");
       for(int i=0;i<4;i++){
           fordelay(100000000);
           printf(".");
       }

   switch(choice){
       case '1':regis();
       break;

       case '2':login();
       break;

       case '3':forPass();
       break;
   }

  mainMenu();

  scanf(" %c",&choice2);
  printf("%c",choice2);

    return 0;
}

void forPass(){
    char a[1][15];
    printf("Enter Security Que (Pet Name) : ");
    scanf("%s",&a[0]);
}
void delay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}